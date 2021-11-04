import pygame
import numpy as np

Display = pygame.display.set_mode([401, 401])

Snake = np.zeros((1, 2))

Score = 0
Apple = np.ones(2)

pygame.init()
pygame.display.set_caption('Snake Game')

done = False

def ResetApplyPosition():
  global Apple, Snake, Score
  if Snake[0, 0] == Apple[0] and Snake[0, 1] == Apple[1]:
    Score += 1
    Snake = np.vstack((Snake, Snake[-1]))
  for i in range(Snake.shape[0]):
    if Apple[0] == Snake[i, 0] and Apple[1] == Snake[i, 1]:
      Apple = np.random.randint(8, size=2)
      i = 0

def GameOverCheck():
  global done
  if Snake[0, 0] < 0 or Snake[0, 0] > 7 or Snake[0, 1] < 0 or Snake[0, 1] > 7:
    done = True
  for i in range(Snake.shape[0] - 1):
    for j in range(Snake.shape[0] - 1):
      if i != j and Snake[i, 0] == Snake[j, 0] and Snake[i, 1] == Snake[j, 1]:
          done = True

while not done:
  for event in pygame.event.get():
    if event.type == pygame.QUIT:
      done = True

    Display.fill((0, 0, 0))

    for i in range(7):
      pygame.draw.line(Display, (255, 255, 255), (i * 50 + 50, 0), (i * 50 + 50, 400))
      pygame.draw.line(Display, (255, 255, 255), (0, i * 50 + 50), (400, i * 50 + 50))

    for i in range(Snake.shape[0]):
      pygame.draw.rect(Display, (0, 255, 0), (Snake[i, 0] * 50 + 10, Snake[i, 1] * 50 + 10, 30, 30))
    
    pygame.draw.rect(Display, (255, 0, 0), (Apple[0] * 50 + 10, Apple[1] * 50 + 10, 30, 30))

    if event.type == pygame.KEYDOWN:
      if (event.key == pygame.K_UP):
        Snake = np.vstack(([Snake[0, 0], Snake[0, 1] - 1], Snake[:-1]))
      if (event.key == pygame.K_RIGHT):
        Snake = np.vstack(([Snake[0, 0] + 1, Snake[0, 1]], Snake[:-1]))
      if (event.key == pygame.K_DOWN):
        Snake = np.vstack(([Snake[0, 0], Snake[0, 1] + 1], Snake[:-1]))
      if (event.key == pygame.K_LEFT):
        Snake = np.vstack(([Snake[0, 0] - 1, Snake[0, 1]], Snake[:-1]))

    ResetApplyPosition()
    GameOverCheck()

    pygame.display.flip()

pygame.quit()