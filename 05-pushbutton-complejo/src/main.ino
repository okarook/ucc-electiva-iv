int pinSwitchA = 10;
int pinSwitchB = 11;
int pinLedA = 13;
int pinLedB = 12;
bool valueSwitchA;
bool valueSwitchB;
bool stateA = false;
bool stateB = false;

void setup()
{
  pinMode(pinSwitchA, INPUT_PULLUP);
  pinMode(pinSwitchB, INPUT_PULLUP);
  pinMode(pinLedA, OUTPUT);
  pinMode(pinLedB, OUTPUT);
}

void loop()
{
  valueSwitchA = digitalRead(pinSwitchA);
  valueSwitchB = digitalRead(pinSwitchB);

  if (! valueSwitchA) {
    stateA= !stateA;
    digitalWrite(pinLedA, stateA);
    digitalWrite(pinLedB, stateA);
  }

  if (! valueSwitchB) {
    stateB = !stateB;
    digitalWrite(pinLedA, stateB);
  }

  delay(200);
}
