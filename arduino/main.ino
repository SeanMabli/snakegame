#include "LedControl.h"

LedControl lc = LedControl(12, 10, 11, 1);

byte Snake_Display_Matrix[8] = { B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,};
byte Apple_Display_Matrix[8] = { B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,};
byte Snake_Apple_Display_Matrix[8] = { B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,};

byte Snake[2][63] = {
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
};

int Snake_Direction = 2; // 1 = Up, 2 = Right, 3 = Down, 4 = Left
int Last_Snake_Direction = 1;
int Score = 0;
int Joystick_X = 0;
int Joystick_Y = 0;
long Apple_X;
long Apple_Y;

int w = 0;
int x = 0;
int y = 0;
int z = 0;

void setup() {
  Serial.begin(9600);

  lc.shutdown(0, false);
  lc.setIntensity(0, 1);
  lc.clearDisplay(0);

  randomSeed(analogRead(4));
}

void loop() {
  while (x == 0) {
    Apple_X = random(8);
    Apple_Y = random(8);
    
    while (0 < Score && y <= Score) {

      if (Apple_X == Snake[0][y] && Apple_Y == Snake[1][y] && y != 0) {
        Apple_X = random(8);
        Apple_Y = random(8);
        y = 0;
      }

      y = y + 1;
    }

    x = 1;
    y = 0;
  }

  Apple_Update_Matrix();

  if (Snake[0][0] == Apple_X && Snake[1][0] == Apple_Y) {
    Apple_Display_Matrix[Apple_X] = B00000000;
    Score = Score + 1;
    x = 0;
  }

  Snake_Apple_Display_Matrix[0] = Snake_Display_Matrix[0] + Apple_Display_Matrix[0];
  Snake_Apple_Display_Matrix[1] = Snake_Display_Matrix[1] + Apple_Display_Matrix[1];
  Snake_Apple_Display_Matrix[2] = Snake_Display_Matrix[2] + Apple_Display_Matrix[2];
  Snake_Apple_Display_Matrix[3] = Snake_Display_Matrix[3] + Apple_Display_Matrix[3];
  Snake_Apple_Display_Matrix[4] = Snake_Display_Matrix[4] + Apple_Display_Matrix[4];
  Snake_Apple_Display_Matrix[5] = Snake_Display_Matrix[5] + Apple_Display_Matrix[5];
  Snake_Apple_Display_Matrix[6] = Snake_Display_Matrix[6] + Apple_Display_Matrix[6];
  Snake_Apple_Display_Matrix[7] = Snake_Display_Matrix[7] + Apple_Display_Matrix[7];

  lc.setColumn(0, 0, Snake_Apple_Display_Matrix[0]);
  lc.setColumn(0, 1, Snake_Apple_Display_Matrix[1]);
  lc.setColumn(0, 2, Snake_Apple_Display_Matrix[2]);
  lc.setColumn(0, 3, Snake_Apple_Display_Matrix[3]);
  lc.setColumn(0, 4, Snake_Apple_Display_Matrix[4]);
  lc.setColumn(0, 5, Snake_Apple_Display_Matrix[5]);
  lc.setColumn(0, 6, Snake_Apple_Display_Matrix[6]);
  lc.setColumn(0, 7, Snake_Apple_Display_Matrix[7]);

  Joystick_Position();

  Game_Over_Check();
}