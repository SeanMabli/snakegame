void Snake_Update_Matrix() {
  Snake_Display_Matrix[0] = B00000000;
  Snake_Display_Matrix[1] = B00000000;
  Snake_Display_Matrix[2] = B00000000;
  Snake_Display_Matrix[3] = B00000000;
  Snake_Display_Matrix[4] = B00000000;
  Snake_Display_Matrix[5] = B00000000;
  Snake_Display_Matrix[6] = B00000000;
  Snake_Display_Matrix[7] = B00000000;
  
  while (y <= Score) {
    if (Snake[0][y] == 0 && Snake[1][y] == 0) {Snake_Display_Matrix[0] = Snake_Display_Matrix[0] + B10000000;}
    if (Snake[0][y] == 0 && Snake[1][y] == 1) {Snake_Display_Matrix[0] = Snake_Display_Matrix[0] + B01000000;}
    if (Snake[0][y] == 0 && Snake[1][y] == 2) {Snake_Display_Matrix[0] = Snake_Display_Matrix[0] + B00100000;}
    if (Snake[0][y] == 0 && Snake[1][y] == 3) {Snake_Display_Matrix[0] = Snake_Display_Matrix[0] + B00010000;}
    if (Snake[0][y] == 0 && Snake[1][y] == 4) {Snake_Display_Matrix[0] = Snake_Display_Matrix[0] + B00001000;}
    if (Snake[0][y] == 0 && Snake[1][y] == 5) {Snake_Display_Matrix[0] = Snake_Display_Matrix[0] + B00000100;}
    if (Snake[0][y] == 0 && Snake[1][y] == 6) {Snake_Display_Matrix[0] = Snake_Display_Matrix[0] + B00000010;}
    if (Snake[0][y] == 0 && Snake[1][y] == 7) {Snake_Display_Matrix[0] = Snake_Display_Matrix[0] + B00000001;}
    
    if (Snake[0][y] == 1 && Snake[1][y] == 0) {Snake_Display_Matrix[1] = Snake_Display_Matrix[1] + B10000000;}
    if (Snake[0][y] == 1 && Snake[1][y] == 1) {Snake_Display_Matrix[1] = Snake_Display_Matrix[1] + B01000000;}
    if (Snake[0][y] == 1 && Snake[1][y] == 2) {Snake_Display_Matrix[1] = Snake_Display_Matrix[1] + B00100000;}
    if (Snake[0][y] == 1 && Snake[1][y] == 3) {Snake_Display_Matrix[1] = Snake_Display_Matrix[1] + B00010000;}
    if (Snake[0][y] == 1 && Snake[1][y] == 4) {Snake_Display_Matrix[1] = Snake_Display_Matrix[1] + B00001000;}
    if (Snake[0][y] == 1 && Snake[1][y] == 5) {Snake_Display_Matrix[1] = Snake_Display_Matrix[1] + B00000100;}
    if (Snake[0][y] == 1 && Snake[1][y] == 6) {Snake_Display_Matrix[1] = Snake_Display_Matrix[1] + B00000010;}
    if (Snake[0][y] == 1 && Snake[1][y] == 7) {Snake_Display_Matrix[1] = Snake_Display_Matrix[1] + B00000001;}
    
    if (Snake[0][y] == 2 && Snake[1][y] == 0) {Snake_Display_Matrix[2] = Snake_Display_Matrix[2] + B10000000;}
    if (Snake[0][y] == 2 && Snake[1][y] == 1) {Snake_Display_Matrix[2] = Snake_Display_Matrix[2] + B01000000;}
    if (Snake[0][y] == 2 && Snake[1][y] == 2) {Snake_Display_Matrix[2] = Snake_Display_Matrix[2] + B00100000;}
    if (Snake[0][y] == 2 && Snake[1][y] == 3) {Snake_Display_Matrix[2] = Snake_Display_Matrix[2] + B00010000;}
    if (Snake[0][y] == 2 && Snake[1][y] == 4) {Snake_Display_Matrix[2] = Snake_Display_Matrix[2] + B00001000;}
    if (Snake[0][y] == 2 && Snake[1][y] == 5) {Snake_Display_Matrix[2] = Snake_Display_Matrix[2] + B00000100;}
    if (Snake[0][y] == 2 && Snake[1][y] == 6) {Snake_Display_Matrix[2] = Snake_Display_Matrix[2] + B00000010;}
    if (Snake[0][y] == 2 && Snake[1][y] == 7) {Snake_Display_Matrix[2] = Snake_Display_Matrix[2] + B00000001;}
    
    if (Snake[0][y] == 3 && Snake[1][y] == 0) {Snake_Display_Matrix[3] = Snake_Display_Matrix[3] + B10000000;}
    if (Snake[0][y] == 3 && Snake[1][y] == 1) {Snake_Display_Matrix[3] = Snake_Display_Matrix[3] + B01000000;}
    if (Snake[0][y] == 3 && Snake[1][y] == 2) {Snake_Display_Matrix[3] = Snake_Display_Matrix[3] + B00100000;}
    if (Snake[0][y] == 3 && Snake[1][y] == 3) {Snake_Display_Matrix[3] = Snake_Display_Matrix[3] + B00010000;}
    if (Snake[0][y] == 3 && Snake[1][y] == 4) {Snake_Display_Matrix[3] = Snake_Display_Matrix[3] + B00001000;}
    if (Snake[0][y] == 3 && Snake[1][y] == 5) {Snake_Display_Matrix[3] = Snake_Display_Matrix[3] + B00000100;}
    if (Snake[0][y] == 3 && Snake[1][y] == 6) {Snake_Display_Matrix[3] = Snake_Display_Matrix[3] + B00000010;}
    if (Snake[0][y] == 3 && Snake[1][y] == 7) {Snake_Display_Matrix[3] = Snake_Display_Matrix[3] + B00000001;}
    
    if (Snake[0][y] == 4 && Snake[1][y] == 0) {Snake_Display_Matrix[4] = Snake_Display_Matrix[4] + B10000000;}
    if (Snake[0][y] == 4 && Snake[1][y] == 1) {Snake_Display_Matrix[4] = Snake_Display_Matrix[4] + B01000000;}
    if (Snake[0][y] == 4 && Snake[1][y] == 2) {Snake_Display_Matrix[4] = Snake_Display_Matrix[4] + B00100000;}
    if (Snake[0][y] == 4 && Snake[1][y] == 3) {Snake_Display_Matrix[4] = Snake_Display_Matrix[4] + B00010000;}
    if (Snake[0][y] == 4 && Snake[1][y] == 4) {Snake_Display_Matrix[4] = Snake_Display_Matrix[4] + B00001000;}
    if (Snake[0][y] == 4 && Snake[1][y] == 5) {Snake_Display_Matrix[4] = Snake_Display_Matrix[4] + B00000100;}
    if (Snake[0][y] == 4 && Snake[1][y] == 6) {Snake_Display_Matrix[4] = Snake_Display_Matrix[4] + B00000010;}
    if (Snake[0][y] == 4 && Snake[1][y] == 7) {Snake_Display_Matrix[4] = Snake_Display_Matrix[4] + B00000001;}
    
    if (Snake[0][y] == 5 && Snake[1][y] == 0) {Snake_Display_Matrix[5] = Snake_Display_Matrix[5] + B10000000;}
    if (Snake[0][y] == 5 && Snake[1][y] == 1) {Snake_Display_Matrix[5] = Snake_Display_Matrix[5] + B01000000;}
    if (Snake[0][y] == 5 && Snake[1][y] == 2) {Snake_Display_Matrix[5] = Snake_Display_Matrix[5] + B00100000;}
    if (Snake[0][y] == 5 && Snake[1][y] == 3) {Snake_Display_Matrix[5] = Snake_Display_Matrix[5] + B00010000;}
    if (Snake[0][y] == 5 && Snake[1][y] == 4) {Snake_Display_Matrix[5] = Snake_Display_Matrix[5] + B00001000;}
    if (Snake[0][y] == 5 && Snake[1][y] == 5) {Snake_Display_Matrix[5] = Snake_Display_Matrix[5] + B00000100;}
    if (Snake[0][y] == 5 && Snake[1][y] == 6) {Snake_Display_Matrix[5] = Snake_Display_Matrix[5] + B00000010;}
    if (Snake[0][y] == 5 && Snake[1][y] == 7) {Snake_Display_Matrix[5] = Snake_Display_Matrix[5] + B00000001;}
    
    if (Snake[0][y] == 6 && Snake[1][y] == 0) {Snake_Display_Matrix[6] = Snake_Display_Matrix[6] + B10000000;}
    if (Snake[0][y] == 6 && Snake[1][y] == 1) {Snake_Display_Matrix[6] = Snake_Display_Matrix[6] + B01000000;}
    if (Snake[0][y] == 6 && Snake[1][y] == 2) {Snake_Display_Matrix[6] = Snake_Display_Matrix[6] + B00100000;}
    if (Snake[0][y] == 6 && Snake[1][y] == 3) {Snake_Display_Matrix[6] = Snake_Display_Matrix[6] + B00010000;}
    if (Snake[0][y] == 6 && Snake[1][y] == 4) {Snake_Display_Matrix[6] = Snake_Display_Matrix[6] + B00001000;}
    if (Snake[0][y] == 6 && Snake[1][y] == 5) {Snake_Display_Matrix[6] = Snake_Display_Matrix[6] + B00000100;}
    if (Snake[0][y] == 6 && Snake[1][y] == 6) {Snake_Display_Matrix[6] = Snake_Display_Matrix[6] + B00000010;}
    if (Snake[0][y] == 6 && Snake[1][y] == 7) {Snake_Display_Matrix[6] = Snake_Display_Matrix[6] + B00000001;}
    
    if (Snake[0][y] == 7 && Snake[1][y] == 0) {Snake_Display_Matrix[7] = Snake_Display_Matrix[7] + B10000000;}
    if (Snake[0][y] == 7 && Snake[1][y] == 1) {Snake_Display_Matrix[7] = Snake_Display_Matrix[7] + B01000000;}
    if (Snake[0][y] == 7 && Snake[1][y] == 2) {Snake_Display_Matrix[7] = Snake_Display_Matrix[7] + B00100000;}
    if (Snake[0][y] == 7 && Snake[1][y] == 3) {Snake_Display_Matrix[7] = Snake_Display_Matrix[7] + B00010000;}
    if (Snake[0][y] == 7 && Snake[1][y] == 4) {Snake_Display_Matrix[7] = Snake_Display_Matrix[7] + B00001000;}
    if (Snake[0][y] == 7 && Snake[1][y] == 5) {Snake_Display_Matrix[7] = Snake_Display_Matrix[7] + B00000100;}
    if (Snake[0][y] == 7 && Snake[1][y] == 6) {Snake_Display_Matrix[7] = Snake_Display_Matrix[7] + B00000010;}
    if (Snake[0][y] == 7 && Snake[1][y] == 7) {Snake_Display_Matrix[7] = Snake_Display_Matrix[7] + B00000001;}
    y = y + 1;
  }
  y = 0;
}

void Apple_Update_Matrix() {
  Apple_Display_Matrix[0] = B00000000;
  Apple_Display_Matrix[1] = B00000000;
  Apple_Display_Matrix[2] = B00000000;
  Apple_Display_Matrix[3] = B00000000;
  Apple_Display_Matrix[4] = B00000000;
  Apple_Display_Matrix[5] = B00000000;
  Apple_Display_Matrix[6] = B00000000;
  Apple_Display_Matrix[7] = B00000000;
  
  while (y <= Score) {
    if (Apple_X == 0 && Apple_Y == 0) {Apple_Display_Matrix[0] =  B10000000;}
    if (Apple_X == 0 && Apple_Y == 1) {Apple_Display_Matrix[0] =  B01000000;}
    if (Apple_X == 0 && Apple_Y == 2) {Apple_Display_Matrix[0] =  B00100000;}
    if (Apple_X == 0 && Apple_Y == 3) {Apple_Display_Matrix[0] =  B00010000;}
    if (Apple_X == 0 && Apple_Y == 4) {Apple_Display_Matrix[0] =  B00001000;}
    if (Apple_X == 0 && Apple_Y == 5) {Apple_Display_Matrix[0] =  B00000100;}
    if (Apple_X == 0 && Apple_Y == 6) {Apple_Display_Matrix[0] =  B00000010;}
    if (Apple_X == 0 && Apple_Y == 7) {Apple_Display_Matrix[0] =  B00000001;}
    
    if (Apple_X == 1 && Apple_Y == 0) {Apple_Display_Matrix[1] =  B10000000;}
    if (Apple_X == 1 && Apple_Y == 1) {Apple_Display_Matrix[1] =  B01000000;}
    if (Apple_X == 1 && Apple_Y == 2) {Apple_Display_Matrix[1] =  B00100000;}
    if (Apple_X == 1 && Apple_Y == 3) {Apple_Display_Matrix[1] =  B00010000;}
    if (Apple_X == 1 && Apple_Y == 4) {Apple_Display_Matrix[1] =  B00001000;}
    if (Apple_X == 1 && Apple_Y == 5) {Apple_Display_Matrix[1] =  B00000100;}
    if (Apple_X == 1 && Apple_Y == 6) {Apple_Display_Matrix[1] =  B00000010;}
    if (Apple_X == 1 && Apple_Y == 7) {Apple_Display_Matrix[1] =  B00000001;}
    
    if (Apple_X == 2 && Apple_Y == 0) {Apple_Display_Matrix[2] =   B10000000;}
    if (Apple_X == 2 && Apple_Y == 1) {Apple_Display_Matrix[2] =  B01000000;}
    if (Apple_X == 2 && Apple_Y == 2) {Apple_Display_Matrix[2] =  B00100000;}
    if (Apple_X == 2 && Apple_Y == 3) {Apple_Display_Matrix[2] =  B00010000;}
    if (Apple_X == 2 && Apple_Y == 4) {Apple_Display_Matrix[2] =  B00001000;}
    if (Apple_X == 2 && Apple_Y == 5) {Apple_Display_Matrix[2] =  B00000100;}
    if (Apple_X == 2 && Apple_Y == 6) {Apple_Display_Matrix[2] =  B00000010;}
    if (Apple_X == 2 && Apple_Y == 7) {Apple_Display_Matrix[2] =  B00000001;}
    
    if (Apple_X == 3 && Apple_Y == 0) {Apple_Display_Matrix[3] =  B10000000;}
    if (Apple_X == 3 && Apple_Y == 1) {Apple_Display_Matrix[3] =  B01000000;}
    if (Apple_X == 3 && Apple_Y == 2) {Apple_Display_Matrix[3] =  B00100000;}
    if (Apple_X == 3 && Apple_Y == 3) {Apple_Display_Matrix[3] =  B00010000;}
    if (Apple_X == 3 && Apple_Y == 4) {Apple_Display_Matrix[3] =  B00001000;}
    if (Apple_X == 3 && Apple_Y == 5) {Apple_Display_Matrix[3] =  B00000100;}
    if (Apple_X == 3 && Apple_Y == 6) {Apple_Display_Matrix[3] =  B00000010;}
    if (Apple_X == 3 && Apple_Y == 7) {Apple_Display_Matrix[3] =  B00000001;}
    
    if (Apple_X == 4 && Apple_Y == 0) {Apple_Display_Matrix[4] =  B10000000;}
    if (Apple_X == 4 && Apple_Y == 1) {Apple_Display_Matrix[4] =  B01000000;}
    if (Apple_X == 4 && Apple_Y == 2) {Apple_Display_Matrix[4] =  B00100000;}
    if (Apple_X == 4 && Apple_Y == 3) {Apple_Display_Matrix[4] =  B00010000;}
    if (Apple_X == 4 && Apple_Y == 4) {Apple_Display_Matrix[4] =  B00001000;}
    if (Apple_X == 4 && Apple_Y == 5) {Apple_Display_Matrix[4] =  B00000100;}
    if (Apple_X == 4 && Apple_Y == 6) {Apple_Display_Matrix[4] =  B00000010;}
    if (Apple_X == 4 && Apple_Y == 7) {Apple_Display_Matrix[4] =  B00000001;}
    
    if (Apple_X == 5 && Apple_Y == 0) {Apple_Display_Matrix[5] =  B10000000;}
    if (Apple_X == 5 && Apple_Y == 1) {Apple_Display_Matrix[5] =  B01000000;}
    if (Apple_X == 5 && Apple_Y == 2) {Apple_Display_Matrix[5] =  B00100000;}
    if (Apple_X == 5 && Apple_Y == 3) {Apple_Display_Matrix[5] =  B00010000;}
    if (Apple_X == 5 && Apple_Y == 4) {Apple_Display_Matrix[5] =  B00001000;}
    if (Apple_X == 5 && Apple_Y == 5) {Apple_Display_Matrix[5] =  B00000100;}
    if (Apple_X == 5 && Apple_Y == 6) {Apple_Display_Matrix[5] =  B00000010;}
    if (Apple_X == 5 && Apple_Y == 7) {Apple_Display_Matrix[5] =  B00000001;}
    
    if (Apple_X == 6 && Apple_Y == 0) {Apple_Display_Matrix[6] =  B10000000;}
    if (Apple_X == 6 && Apple_Y == 1) {Apple_Display_Matrix[6] =  B01000000;}
    if (Apple_X == 6 && Apple_Y == 2) {Apple_Display_Matrix[6] =  B00100000;}
    if (Apple_X == 6 && Apple_Y == 3) {Apple_Display_Matrix[6] =  B00010000;}
    if (Apple_X == 6 && Apple_Y == 4) {Apple_Display_Matrix[6] =  B00001000;}
    if (Apple_X == 6 && Apple_Y == 5) {Apple_Display_Matrix[6] =  B00000100;}
    if (Apple_X == 6 && Apple_Y == 6) {Apple_Display_Matrix[6] =  B00000010;}
    if (Apple_X == 6 && Apple_Y == 7) {Apple_Display_Matrix[6] =  B00000001;}
    
    if (Apple_X == 7 && Apple_Y == 0) {Apple_Display_Matrix[7] =  B10000000;}
    if (Apple_X == 7 && Apple_Y == 1) {Apple_Display_Matrix[7] =  B01000000;}
    if (Apple_X == 7 && Apple_Y == 2) {Apple_Display_Matrix[7] =  B00100000;}
    if (Apple_X == 7 && Apple_Y == 3) {Apple_Display_Matrix[7] =  B00010000;}
    if (Apple_X == 7 && Apple_Y == 4) {Apple_Display_Matrix[7] =  B00001000;}
    if (Apple_X == 7 && Apple_Y == 5) {Apple_Display_Matrix[7] =  B00000100;}
    if (Apple_X == 7 && Apple_Y == 6) {Apple_Display_Matrix[7] =  B00000010;}
    if (Apple_X == 7 && Apple_Y == 7) {Apple_Display_Matrix[7] =  B00000001;}
    y = y + 1;
  }
  y = 0;
}