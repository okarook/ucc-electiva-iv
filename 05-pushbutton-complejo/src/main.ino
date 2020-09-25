int led1 = 13;
int led2 = 12;
int switchA = 11;
bool state;

void setup()
{
  pinMode(switchA, INPUT_PULLUP);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop()
{
  state = digitalRead(switchA);
  digitalWrite(led1, state);
  digitalWrite(led2, ! state);
}
