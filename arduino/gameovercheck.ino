void Game_Over_Check() {
  if (Snake_Direction == 1 && Snake[1][0] == -1) {
    Game_Over();
  }

  if (Snake_Direction == 2 && Snake[0][0] == 8) {
    Game_Over();
  }

  if (Snake_Direction == 3  && Snake[1][0] == 8) {
    Game_Over();
  }

  if (Snake_Direction == 4 && Snake[0][0] == -1) {
    Game_Over();
  }

  if (Last_Snake_Direction == 1 && Snake_Direction == 3 && 0 < Score) {
    Game_Over();
  }

  if (Last_Snake_Direction == 2 && Snake_Direction == 4 && 0 < Score) {
    Game_Over();
  }

  if (Last_Snake_Direction == 3 && Snake_Direction == 1 && 0 < Score) {
    Game_Over();
  }

  if (Last_Snake_Direction == 4 && Snake_Direction == 2 && 0 < Score) {
    Game_Over();
  }

  while (3 < Score && y <= Score) {
    if (Snake[0][0] == Snake[0][y] && Snake[1][0] == Snake[1][y] && y > 0) {
      Game_Over();
    }
    y = y + 1;
  }
  y = 0;
}

void Game_Over() {

  lc.setColumn(0, 0, B00000000);
  lc.setColumn(0, 1, B00000000);
  lc.setColumn(0, 2, B00000000);
  lc.setColumn(0, 3, B00000000);
  lc.setColumn(0, 4, B00000000);
  lc.setColumn(0, 5, B00000000);
  lc.setColumn(0, 6, B00000000);
  lc.setColumn(0, 7, B00000000);

  byte Game_Over_Text[19][8] = {
    {B00000000, B01111110, B10000001, B10000001, B10000001, B10000101, B10000111, B00000000,}, // G
    {B00000011, B00011100, B01101000, B10001000, B10001000, B01101000, B00011100, B00000011,}, // A
    {B00000000, B11111111, B01000000, B00100000, B00100000, B01000000, B11111111, B00000000,}, // M
    {B00000000, B11111111, B10010001, B10010001, B10010001, B10000001, B10000001, B00000000,}, // E
    {B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,}, // Space
    {B00111100, B01000010, B10000001, B10000001, B10000001, B10000001, B01000010, B00111100,}, // O
    {B00000000, B11110000, B00001110, B00000001, B00000001, B00001110, B11110000, B00000000,}, // V
    {B00000000, B11111111, B10010001, B10010001, B10010001, B10000001, B10000001, B00000000,}, // E
    {B00000000, B11111111, B10001100, B10001010, B10001010, B10001001, B01110000, B00000000,}, // R
    {B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,}, // Space
    {B00000000, B01100001, B10010001, B10010001, B10001001, B10001001, B10000110, B00000000,}, // S
    {B00000000, B01111110, B10000001, B10000001, B10000001, B10000001, B10000001, B00000000,}, // C
    {B00111100, B01000010, B10000001, B10000001, B10000001, B10000001, B01000010, B00111100,}, // O
    {B00000000, B11111111, B10001100, B10001010, B10001010, B10001001, B01110000, B00000000,}, // R
    {B00000000, B11111111, B10010001, B10010001, B10010001, B10000001, B10000001, B00000000,}, // E
    {B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,}, // Space
    {B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,}, // Score
    {B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,}, // Score
    {B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,}, // Space
  };

  byte Zero_Matrix[8] = {B00000000, B01111110, B10000001, B10000001, B10000001, B10000001, B01111110, B00000000,};
  byte One_Matrix[8] = {B00000000, B00000000, B00100001, B01000001, B11111111, B00000001, B00000001, B00000000,};
  byte Two_Matrix[8] = {B00000000, B00100001, B01000011, B01000101, B01000101, B01001001, B00110001, B00000000,};
  byte Three_Matrix[8] = {B00000000, B00000000, B01000001, B01001001, B01001001, B01001001, B00110110, B00000000,};
  byte Four_Matrix[8] = {B00000000, B00000000, B01111000, B00001000, B00001000, B01111111, B00000000, B00000000,};
  byte Five_Matrix[8] = {B00000000, B00000000, B01111001, B01001001, B01001001, B01000110, B00000000, B00000000,};
  byte Six_Matrix[8] = {B00000000, B00000000, B00111110, B01001001, B01001001, B01000110, B00000000, B00000000,};
  byte Seven_Matrix[8] = {B00000000, B00000000, B10000001, B10000110, B10001000, B10110000, B11000000, B00000000,};
  byte Eight_Matrix[8] = {B00000000, B00000000, B00110110, B01001001, B01001001, B00110110, B00000000, B00000000,};
  byte Nine_Matrix[8] = {B00000000, B00000000, B00110000, B01001000, B01001000, B01111111, B00000000, B00000000,};

  String Score_String = String(Score);

  if (Score_String.length() == 1) {
    Score_String = "0" + Score_String;
  }

  if (Score_String.length() == 2) {
    if (Score_String.substring(0, 1) == "0") {
      Game_Over_Text[16][0] = Zero_Matrix[0];
      Game_Over_Text[16][1] = Zero_Matrix[1];
      Game_Over_Text[16][2] = Zero_Matrix[2];
      Game_Over_Text[16][3] = Zero_Matrix[3];
      Game_Over_Text[16][4] = Zero_Matrix[4];
      Game_Over_Text[16][5] = Zero_Matrix[5];
      Game_Over_Text[16][6] = Zero_Matrix[6];
      Game_Over_Text[16][7] = Zero_Matrix[7];
    }
    if (Score_String.substring(0, 1) == "1") {
      Game_Over_Text[16][0] = One_Matrix[0];
      Game_Over_Text[16][1] = One_Matrix[1];
      Game_Over_Text[16][2] = One_Matrix[2];
      Game_Over_Text[16][3] = One_Matrix[3];
      Game_Over_Text[16][4] = One_Matrix[4];
      Game_Over_Text[16][5] = One_Matrix[5];
      Game_Over_Text[16][6] = One_Matrix[6];
      Game_Over_Text[16][7] = One_Matrix[7];
    }
    if (Score_String.substring(0, 1) == "2") {
      Game_Over_Text[16][0] = Two_Matrix[0];
      Game_Over_Text[16][1] = Two_Matrix[1];
      Game_Over_Text[16][2] = Two_Matrix[2];
      Game_Over_Text[16][3] = Two_Matrix[3];
      Game_Over_Text[16][4] = Two_Matrix[4];
      Game_Over_Text[16][5] = Two_Matrix[5];
      Game_Over_Text[16][6] = Two_Matrix[6];
      Game_Over_Text[16][7] = Two_Matrix[7];
    }
    if (Score_String.substring(0, 1) == "3") {
      Game_Over_Text[16][0] = Three_Matrix[0];
      Game_Over_Text[16][1] = Three_Matrix[1];
      Game_Over_Text[16][2] = Three_Matrix[2];
      Game_Over_Text[16][3] = Three_Matrix[3];
      Game_Over_Text[16][4] = Three_Matrix[4];
      Game_Over_Text[16][5] = Three_Matrix[5];
      Game_Over_Text[16][6] = Three_Matrix[6];
      Game_Over_Text[16][7] = Three_Matrix[7];
    }
    if (Score_String.substring(0, 1) == "4") {
      Game_Over_Text[16][0] = Four_Matrix[0];
      Game_Over_Text[16][1] = Four_Matrix[1];
      Game_Over_Text[16][2] = Four_Matrix[2];
      Game_Over_Text[16][3] = Four_Matrix[3];
      Game_Over_Text[16][4] = Four_Matrix[4];
      Game_Over_Text[16][5] = Four_Matrix[5];
      Game_Over_Text[16][6] = Four_Matrix[6];
      Game_Over_Text[16][7] = Four_Matrix[7];
    }
    if (Score_String.substring(0, 1) == "5") {
      Game_Over_Text[16][0] = Five_Matrix[0];
      Game_Over_Text[16][1] = Five_Matrix[1];
      Game_Over_Text[16][2] = Five_Matrix[2];
      Game_Over_Text[16][3] = Five_Matrix[3];
      Game_Over_Text[16][4] = Five_Matrix[4];
      Game_Over_Text[16][5] = Five_Matrix[5];
      Game_Over_Text[16][6] = Five_Matrix[6];
      Game_Over_Text[16][7] = Five_Matrix[7];
    }
    if (Score_String.substring(0, 1) == "6") {
      Game_Over_Text[16][0] = Five_Matrix[0];
      Game_Over_Text[16][1] = Five_Matrix[1];
      Game_Over_Text[16][2] = Five_Matrix[2];
      Game_Over_Text[16][3] = Five_Matrix[3];
      Game_Over_Text[16][4] = Five_Matrix[4];
      Game_Over_Text[16][5] = Five_Matrix[5];
      Game_Over_Text[16][6] = Five_Matrix[6];
      Game_Over_Text[16][7] = Five_Matrix[7];
    }

    if (Score_String.substring(1, 2) == "0") {
      Game_Over_Text[17][0] = Zero_Matrix[0];
      Game_Over_Text[17][1] = Zero_Matrix[1];
      Game_Over_Text[17][2] = Zero_Matrix[2];
      Game_Over_Text[17][3] = Zero_Matrix[3];
      Game_Over_Text[17][4] = Zero_Matrix[4];
      Game_Over_Text[17][5] = Zero_Matrix[5];
      Game_Over_Text[17][6] = Zero_Matrix[6];
      Game_Over_Text[17][7] = Zero_Matrix[7];
    }
    if (Score_String.substring(1, 2) == "1") {
      Game_Over_Text[17][0] = One_Matrix[0];
      Game_Over_Text[17][1] = One_Matrix[1];
      Game_Over_Text[17][2] = One_Matrix[2];
      Game_Over_Text[17][3] = One_Matrix[3];
      Game_Over_Text[17][4] = One_Matrix[4];
      Game_Over_Text[17][5] = One_Matrix[5];
      Game_Over_Text[17][6] = One_Matrix[6];
      Game_Over_Text[17][7] = One_Matrix[7];
    }
    if (Score_String.substring(1, 2) == "2") {
      Game_Over_Text[17][0] = Two_Matrix[0];
      Game_Over_Text[17][1] = Two_Matrix[1];
      Game_Over_Text[17][2] = Two_Matrix[2];
      Game_Over_Text[17][3] = Two_Matrix[3];
      Game_Over_Text[17][4] = Two_Matrix[4];
      Game_Over_Text[17][5] = Two_Matrix[5];
      Game_Over_Text[17][6] = Two_Matrix[6];
      Game_Over_Text[17][7] = Two_Matrix[7];
    }
    if (Score_String.substring(1, 2) == "3") {
      Game_Over_Text[17][0] = Three_Matrix[0];
      Game_Over_Text[17][1] = Three_Matrix[1];
      Game_Over_Text[17][2] = Three_Matrix[2];
      Game_Over_Text[17][3] = Three_Matrix[3];
      Game_Over_Text[17][4] = Three_Matrix[4];
      Game_Over_Text[17][5] = Three_Matrix[5];
      Game_Over_Text[17][6] = Three_Matrix[6];
      Game_Over_Text[17][7] = Three_Matrix[7];
    }
    if (Score_String.substring(1, 2) == "4") {
      Game_Over_Text[17][0] = Four_Matrix[0];
      Game_Over_Text[17][1] = Four_Matrix[1];
      Game_Over_Text[17][2] = Four_Matrix[2];
      Game_Over_Text[17][3] = Four_Matrix[3];
      Game_Over_Text[17][4] = Four_Matrix[4];
      Game_Over_Text[17][5] = Four_Matrix[5];
      Game_Over_Text[17][6] = Four_Matrix[6];
      Game_Over_Text[17][7] = Four_Matrix[7];
    }
    if (Score_String.substring(1, 2) == "5") {
      Game_Over_Text[17][0] = Five_Matrix[0];
      Game_Over_Text[17][1] = Five_Matrix[1];
      Game_Over_Text[17][2] = Five_Matrix[2];
      Game_Over_Text[17][3] = Five_Matrix[3];
      Game_Over_Text[17][4] = Five_Matrix[4];
      Game_Over_Text[17][5] = Five_Matrix[5];
      Game_Over_Text[17][6] = Five_Matrix[6];
      Game_Over_Text[17][7] = Five_Matrix[7];
    }
    if (Score_String.substring(1, 2) == "6") {
      Game_Over_Text[17][0] = Six_Matrix[0];
      Game_Over_Text[17][1] = Six_Matrix[1];
      Game_Over_Text[17][2] = Six_Matrix[2];
      Game_Over_Text[17][3] = Six_Matrix[3];
      Game_Over_Text[17][4] = Six_Matrix[4];
      Game_Over_Text[17][5] = Six_Matrix[5];
      Game_Over_Text[17][6] = Six_Matrix[6];
      Game_Over_Text[17][7] = Six_Matrix[7];
    }
    if (Score_String.substring(1, 2) == "7") {
      Game_Over_Text[17][0] = Seven_Matrix[0];
      Game_Over_Text[17][1] = Seven_Matrix[1];
      Game_Over_Text[17][2] = Seven_Matrix[2];
      Game_Over_Text[17][3] = Seven_Matrix[3];
      Game_Over_Text[17][4] = Seven_Matrix[4];
      Game_Over_Text[17][5] = Seven_Matrix[5];
      Game_Over_Text[17][6] = Seven_Matrix[6];
      Game_Over_Text[17][7] = Seven_Matrix[7];
    }
    if (Score_String.substring(1, 2) == "8") {
      Game_Over_Text[17][0] = Eight_Matrix[0];
      Game_Over_Text[17][1] = Eight_Matrix[1];
      Game_Over_Text[17][2] = Eight_Matrix[2];
      Game_Over_Text[17][3] = Eight_Matrix[3];
      Game_Over_Text[17][4] = Eight_Matrix[4];
      Game_Over_Text[17][5] = Eight_Matrix[5];
      Game_Over_Text[17][6] = Eight_Matrix[6];
      Game_Over_Text[17][7] = Eight_Matrix[7];
    }
    if (Score_String.substring(1, 2) == "9") {
      Game_Over_Text[17][0] = Nine_Matrix[0];
      Game_Over_Text[17][1] = Nine_Matrix[1];
      Game_Over_Text[17][2] = Nine_Matrix[2];
      Game_Over_Text[17][3] = Nine_Matrix[3];
      Game_Over_Text[17][4] = Nine_Matrix[4];
      Game_Over_Text[17][5] = Nine_Matrix[5];
      Game_Over_Text[17][6] = Nine_Matrix[6];
      Game_Over_Text[17][7] = Nine_Matrix[7];
    }
  }


  while (z <= 17) {
    lc.setColumn(0, 7, Game_Over_Text[z][0]);
    delay(60);
    lc.setColumn(0, 6, Game_Over_Text[z][0]);
    lc.setColumn(0, 7, Game_Over_Text[z][1]);
    delay(80);
    lc.setColumn(0, 5, Game_Over_Text[z][0]);
    lc.setColumn(0, 6, Game_Over_Text[z][1]);
    lc.setColumn(0, 7, Game_Over_Text[z][2]);
    delay(100);
    lc.setColumn(0, 4, Game_Over_Text[z][0]);
    lc.setColumn(0, 5, Game_Over_Text[z][1]);
    lc.setColumn(0, 6, Game_Over_Text[z][2]);
    lc.setColumn(0, 7, Game_Over_Text[z][3]);
    delay(120);
    lc.setColumn(0, 3, Game_Over_Text[z][0]);
    lc.setColumn(0, 4, Game_Over_Text[z][1]);
    lc.setColumn(0, 5, Game_Over_Text[z][2]);
    lc.setColumn(0, 6, Game_Over_Text[z][3]);
    lc.setColumn(0, 7, Game_Over_Text[z][4]);
    delay(140);
    lc.setColumn(0, 2, Game_Over_Text[z][0]);
    lc.setColumn(0, 3, Game_Over_Text[z][1]);
    lc.setColumn(0, 4, Game_Over_Text[z][2]);
    lc.setColumn(0, 5, Game_Over_Text[z][3]);
    lc.setColumn(0, 6, Game_Over_Text[z][4]);
    lc.setColumn(0, 7, Game_Over_Text[z][5]);
    delay(160);
    lc.setColumn(0, 1, Game_Over_Text[z][0]);
    lc.setColumn(0, 2, Game_Over_Text[z][1]);
    lc.setColumn(0, 3, Game_Over_Text[z][2]);
    lc.setColumn(0, 4, Game_Over_Text[z][3]);
    lc.setColumn(0, 5, Game_Over_Text[z][4]);
    lc.setColumn(0, 6, Game_Over_Text[z][5]);
    lc.setColumn(0, 7, Game_Over_Text[z][6]);
    delay(180);
    lc.setColumn(0, 0, Game_Over_Text[z][0]);
    lc.setColumn(0, 1, Game_Over_Text[z][1]);
    lc.setColumn(0, 2, Game_Over_Text[z][2]);
    lc.setColumn(0, 3, Game_Over_Text[z][3]);
    lc.setColumn(0, 4, Game_Over_Text[z][4]);
    lc.setColumn(0, 5, Game_Over_Text[z][5]);
    lc.setColumn(0, 6, Game_Over_Text[z][6]);
    lc.setColumn(0, 7, Game_Over_Text[z][7]);
    delay(200);
    lc.setColumn(0, 0, Game_Over_Text[z][1]);
    lc.setColumn(0, 1, Game_Over_Text[z][2]);
    lc.setColumn(0, 2, Game_Over_Text[z][3]);
    lc.setColumn(0, 3, Game_Over_Text[z][4]);
    lc.setColumn(0, 4, Game_Over_Text[z][5]);
    lc.setColumn(0, 5, Game_Over_Text[z][6]);
    lc.setColumn(0, 6, Game_Over_Text[z][7]);
    lc.setColumn(0, 7, B00000000);
    delay(180);
    lc.setColumn(0, 0, Game_Over_Text[z][2]);
    lc.setColumn(0, 1, Game_Over_Text[z][3]);
    lc.setColumn(0, 2, Game_Over_Text[z][4]);
    lc.setColumn(0, 3, Game_Over_Text[z][5]);
    lc.setColumn(0, 4, Game_Over_Text[z][6]);
    lc.setColumn(0, 5, Game_Over_Text[z][7]);
    lc.setColumn(0, 6, B00000000);
    delay(160);
    lc.setColumn(0, 0, Game_Over_Text[z][3]);
    lc.setColumn(0, 1, Game_Over_Text[z][4]);
    lc.setColumn(0, 2, Game_Over_Text[z][5]);
    lc.setColumn(0, 3, Game_Over_Text[z][6]);
    lc.setColumn(0, 4, Game_Over_Text[z][7]);
    lc.setColumn(0, 5, B00000000);
    delay(140);
    lc.setColumn(0, 0, Game_Over_Text[z][4]);
    lc.setColumn(0, 1, Game_Over_Text[z][5]);
    lc.setColumn(0, 2, Game_Over_Text[z][6]);
    lc.setColumn(0, 3, Game_Over_Text[z][7]);
    lc.setColumn(0, 4, B00000000);
    delay(120);
    lc.setColumn(0, 0, Game_Over_Text[z][5]);
    lc.setColumn(0, 1, Game_Over_Text[z][6]);
    lc.setColumn(0, 2, Game_Over_Text[z][7]);
    lc.setColumn(0, 3, B00000000);
    delay(100);
    lc.setColumn(0, 0, Game_Over_Text[z][6]);
    lc.setColumn(0, 1, Game_Over_Text[z][7]);
    lc.setColumn(0, 2, B00000000);
    delay(80);
    lc.setColumn(0, 0, Game_Over_Text[z][7]);
    lc.setColumn(0, 1, B00000000);
    delay(60);
    lc.setColumn(0, 0, B00000000);
    delay(40);
    z = z + 1;
  }
  z = 0;
}
