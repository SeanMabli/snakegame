void Snake_Length() {
  if (0 < Score) {
    Snake[0][Score + 1] = 0;
    Snake[1][Score + 1] = 0;
    w = Score;
  }
  
  y = 0;
  
  while (0 < Score && y <= Score) {
    Snake[0][w + 1] = Snake[0][w];
    Snake[1][w + 1] = Snake[1][w];
    w = w - 1;
    y = y + 1;
  }
  y = 0;
}
