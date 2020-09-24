int pins[3] = {11, 12, 13};
int len = 3;

void setup()
{
  for (int i = 0; i < len; i++)
  {
    pinMode(pins[i], OUTPUT);
  }
  digitalWrite(pins[0], HIGH);
}

void loop()
{
  control(pins);
}

void control(int pins[3])
{
  delay(3000);
  digitalWrite(pins[0], LOW);
  digitalWrite(pins[1], HIGH);
  delay(1000);

  digitalWrite(pins[1], LOW);
  digitalWrite(pins[2], HIGH);
  delay(3000);

  digitalWrite(pins[1], HIGH);
  digitalWrite(pins[2], LOW);
  delay(1000);

  digitalWrite(pins[1], LOW);
  digitalWrite(pins[0], HIGH);
}
