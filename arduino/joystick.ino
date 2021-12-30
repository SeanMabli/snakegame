void Joystick_Position() {
  Joystick_X = analogRead(0);
  Joystick_Y = analogRead(1);

  Last_Snake_Direction = Snake_Direction;

  if (Joystick_X > 0 && Joystick_X < 335 && Joystick_Y > 335 && Joystick_Y < 670) {
    // Left Turn

    Snake_Direction = 4;

  } else if (Joystick_X > 670 && Joystick_X < 1005 && Joystick_Y > 335 && Joystick_Y < 670) {
    // Right Turn

    Snake_Direction = 2;

  } else if (Joystick_X > 335 && Joystick_X < 670 && Joystick_Y > 0 && Joystick_Y < 335) {
    // Up Turn

    Snake_Direction = 1;

  } else if (Joystick_X > 335 && Joystick_X < 670 && Joystick_Y > 670 && Joystick_Y < 1005) {
    // Down Turn

    Snake_Direction = 3;

  } else if (millis() % 1000 < 20) {
    Move();
    delay(20);
  }
}

void Move() {
  if (Snake_Direction == 1) { // Up
    Snake_Length();

    Snake[1][0] = Snake[1][0] - 1;

    Snake_Update_Matrix();
  }

  if (Snake_Direction == 2) { // Right
    Snake_Length();

    Snake[0][0] = Snake[0][0] + 1;

    Snake_Update_Matrix();
  }

  if (Snake_Direction == 3) { // Down
    Snake_Length();

    Snake[1][0] = Snake[1][0] + 1;

    Snake_Update_Matrix();
  }

  if (Snake_Direction == 4) { // Left
    Snake_Length();

    Snake[0][0] = Snake[0][0] - 1;

    Snake_Update_Matrix();
  }
}
