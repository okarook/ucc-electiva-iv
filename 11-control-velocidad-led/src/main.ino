const int pinLEDs[] = {3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
const int len = 10;

void setup()
{
  for (int i = 0; i < len; i++) {
    pinMode(pinLEDs[i], OUTPUT);
  }
}

void loop()
{
  // Mayor voltaje - itera mas rapido
  // Menor voltaje - itera mas lento
  for (int i = 0; i < len; i++) {
    digitalWrite(pinLEDs[i], HIGH);
    delay((1123 - analogRead(A0)));
    digitalWrite(pinLEDs[i], LOW);
  }
}
