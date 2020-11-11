const int pinLEDs[] = {3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
const int len = 10;
int bandera = 0;
int voltage = 0;

void setup()
{
  Serial.begin(9600);
  for (int i = 0; i < len; i++) {
    pinMode(pinLEDs[i], OUTPUT);
  }
}

void loop()
{
  voltage = analogRead(A0);
  bandera = (voltage / 102.3);

  for (int i = 0; i < len; i++) {
    digitalWrite(pinLEDs[i], i < bandera);
  }

  Serial.println(voltage);
  delay(500);
}
