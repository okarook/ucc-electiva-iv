int tLight1[3] = {11, 12, 13};
int tLight2[3] = {8, 9, 10};
int tLight3[3] = {7, 6, 5};
int tLight4[3] = {4, 3, 2};

void setup()
{
  for (int i = 0; i < 3; i++) {
  	pinMode(tLight1[i], OUTPUT);
    pinMode(tLight2[i], OUTPUT);
    pinMode(tLight3[i], OUTPUT);
    pinMode(tLight4[i], OUTPUT);
  }

  digitalWrite(tLight1[0], HIGH);
  digitalWrite(tLight2[0], HIGH);
  digitalWrite(tLight3[0], HIGH);
  digitalWrite(tLight4[0], HIGH);
}

void loop()
{
  control(tLight1);
  control(tLight2);
  control(tLight3);
  control(tLight4);
}

void control(int pins[3]) {
  delay(800);
  digitalWrite(pins[0], LOW);
  digitalWrite(pins[1], HIGH);
  delay(2000);

  digitalWrite(pins[1], LOW);
  digitalWrite(pins[2], HIGH);
  delay(5000);

  digitalWrite(pins[1], HIGH);
  digitalWrite(pins[2], LOW);
  delay(2000);

  digitalWrite(pins[1], LOW);
  digitalWrite(pins[0], HIGH);
}
