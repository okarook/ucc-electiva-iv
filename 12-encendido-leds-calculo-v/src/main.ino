const int pinLeds[7] = {6,7,8,9,10,11,12};
const int len = 7;
int data, percentage;

void setup()
{
  Serial.begin(9600);
  for(int i = 0; i < len; i++){
    pinMode(pinLeds[i], OUTPUT);
  }
}

void loop()
{
  data = analogRead(A0);
  percentage = map(data, 0, 1023, 0, 7);

  for (int i = 0; i < len; i++) {
    digitalWrite(pinLeds[i], i < percentage);
  }

  Serial.print("Lectura Potenciometro. DATA: ");
  Serial.print(data);
  Serial.print(" %: ");
  Serial.print(percentage);
  Serial.println();
  delay(1000);
}
