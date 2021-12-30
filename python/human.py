import pygame
import numpy as np

# Everything is square
DisplaySize = 401
Board = 25
BoxSize = (DisplaySize - 1) / Board
Display = pygame.display.set_mode([DisplaySize, DisplaySize])

Snake = np.zeros((1, 2))

Score = 0
Apple = np.zeros(2)
while np.sum(Apple) == 0:
  Apple = np.random.randint(Board, size=2)

pygame.init()
pygame.display.set_caption('Snake Game')

done = False

while not done:
  for event in pygame.event.get():
    if event.type == pygame.QUIT:
      done = True

    # Display background
    Display.fill((0, 0, 0))
    for i in range(Board):
      pygame.draw.line(Display, (255, 255, 255), (i * BoxSize + BoxSize, 0), (i * BoxSize + BoxSize, DisplaySize - 1))
      pygame.draw.line(Display, (255, 255, 255), (0, i * BoxSize + BoxSize), (DisplaySize - 1, i * BoxSize + BoxSize))

    # Display snake an apple
    for i in range(Snake.shape[0]):
      pygame.draw.rect(Display, (0, 255, 0), (int(Snake[i, 0] * BoxSize + (0.1 * BoxSize)), int(Snake[i, 1] * BoxSize + (0.1 * BoxSize)), int(0.8 * BoxSize), int(0.8 * BoxSize)))
    pygame.draw.rect(Display, (225, 0, 0), (int(Apple[0] * BoxSize + (0.1 * BoxSize)), int(Apple[1] * BoxSize + (0.1 * BoxSize)), int(0.8 * BoxSize), int(0.8 * BoxSize)))

    # Detect key commands
    if event.type == pygame.KEYDOWN:
      if (event.key == pygame.K_UP):
        Snake = np.vstack(([Snake[0, 0], Snake[0, 1] - 1], Snake[:-1]))
      if (event.key == pygame.K_RIGHT):
        Snake = np.vstack(([Snake[0, 0] + 1, Snake[0, 1]], Snake[:-1]))
      if (event.key == pygame.K_DOWN):
        Snake = np.vstack(([Snake[0, 0], Snake[0, 1] + 1], Snake[:-1]))
      if (event.key == pygame.K_LEFT):
        Snake = np.vstack(([Snake[0, 0] - 1, Snake[0, 1]], Snake[:-1]))

    # Increase score
    if np.array_equal(Snake[0, :], Apple):
      Score += 1
      Snake = np.vstack((Snake, [Board, Board]))

    # Check that new apple location is not on the snake
    for i in range(Snake.shape[0]):
      if Apple[0] == Snake[i, 0] and Apple[1] == Snake[i, 1]:
        Apple = np.random.randint(Board, size=2)
        i = 0
        
    # Check out of bounds
    if Snake[0, 0] < 0 or Snake[0, 0] > Board - 1 or Snake[0, 1] < 0 or Snake[0, 1] > Board - 1:
      done = True
    
    # Check intersecting with itself
    for i in range(Snake.shape[0] - 1):
      for j in range(Snake.shape[0] - 1):
        if i != j and np.array_equal(Snake[i, :], Snake[j, :]):
          done = True 

    pygame.display.flip()

pygame.quit()