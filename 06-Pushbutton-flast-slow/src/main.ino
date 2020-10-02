int pinPushbuttonFlast = 11;
int pinPushbuttonSlow = 12;
int pinLed = 13;

void setup()
{
  pinMode(pinPushbuttonFlast, INPUT_PULLUP);
  pinMode(pinPushbuttonSlow, INPUT_PULLUP);
  pinMode(pinLed, OUTPUT);
}

void loop()
{
  if (! digitalRead(pinPushbuttonFlast)) {
    delay(500);
    digitalWrite(pinLed, HIGH);
    delay(500);
  } else if (! digitalRead(pinPushbuttonSlow)) {
    delay(1000);
    digitalWrite(pinLed, HIGH);
    delay(1000);
  }
  digitalWrite(pinLed, LOW);
}
