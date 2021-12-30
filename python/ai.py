import numpy as np
import aiinpy as ai

PopulationSize = 1000
board = 8

model = ai.neuroevolution((8, 8), 4, PopulationSize, [
  ai.conv(filtershape=(16, 3, 3), learningrate=0.01, activation=ai.sigmoid, padding=True),
  ai.pool(filtershape=(2, 2), stride=(2, 2), opperation='Max'),
  ai.nn(outshape=4, activation=ai.stablesoftmax, learningrate=0.1)
])

alive = np.array([True] * PopulationSize, dtype=bool)
Score = np.zeros(PopulationSize)

Snake = np.zeros((PopulationSize, 2, 63), dtype=int)
apple = np.zeros((2, PopulationSize), dtype=int)
for i in range(apple.shape[1]):
  while np.sum(apple[:, i]) == 0:
    apple[:, i] = np.random.randint(board, size=2)

for Generation in range(100):
  while np.sum(alive) != 0:
    for x in range(PopulationSize):
      print(Snake.shape)
      input = np.zeros((board, board))
      for i in range(Snake.shape[0]):
        input[Snake[x, i, 0], Snake[x, i, 1]] = 1
      input[apple[x, 0], apple[x, 1]] = 0.5
      out = model.forwardsingle(input, x)
      if (np.max(out) == out[0]):
        Snake[:, :, x] = np.vstack(([Snake[0, 0, x], Snake[0, 1, x] - 1], Snake[:-1, :, x]))
      if (np.max(out) == out[1]):
        Snake[:, :, x] = np.vstack(([Snake[0, 0, x] + 1, Snake[0, 1, x]], Snake[:-1, :, x]))
      if (np.max(out) == out[2]):
        Snake[:, :, x] = np.vstack(([Snake[0, 0, x], Snake[0, 1, x] + 1], Snake[:-1, :, x]))
      if (np.max(out) == out[3]):
        Snake[:, :, x] = np.vstack(([Snake[0, 0, x] - 1, Snake[0, 1, x]], Snake[:-1, :, x]))

      # increase score
      if np.array_equal(Snake[x, 0, :], apple[x, :]) and alive[x] == True:
        Score[x] += 1
        Snake[x, :, :] = np.vstack((Snake[x, :, :], [board, board]))

      # Check that new apple location is not on the snake
      for i in range(Snake.shape[0]):
        if np.array_equal(apple[0], Snake[i, 0, x]) and np.array_equal(apple[1], Snake[i, 1, x]):
          apple = np.random.randint(board, size=2)
          i = 0
          
      # Check out of bounds
      if Snake[0, 0] < 0 or Snake[0, 0] > board - 1 or Snake[0, 1] < 0 or Snake[0, 1] > board - 1:
        done = True
      
      # Check intersecting with itself
      for i in range(Snake.shape[0] - 1):
        for j in range(Snake.shape[0] - 1):
          if i != j and np.array_equal(Snake[i, :], Snake[j, :]):
            alive[x] = False