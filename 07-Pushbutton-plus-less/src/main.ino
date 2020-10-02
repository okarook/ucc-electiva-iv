const int pinPushbuttonPlus = 7;
const int pinPushbuttonLess = 6;
const int pinPushbuttonLed = 5;
const int pinLeds[5] = {8,9,10,11,12};
const int pinLed= 13;
const int len = 5;
int cont = 0;

void setup()
{
	Serial.begin(9600);
	pinMode(pinPushbuttonPlus, INPUT_PULLUP);
  pinMode(pinPushbuttonLess, INPUT_PULLUP);
  pinMode(pinPushbuttonLed, INPUT_PULLUP);
  for(int i = 0; i < len; i++){
    pinMode(pinLeds[i], OUTPUT);
  }
}
void loop()
{
  if (! digitalRead(pinPushbuttonPlus) && cont < 5) {
    digitalWrite(pinLeds[cont], HIGH);
    cont++;
  }

  if (! digitalRead(pinPushbuttonLess) && cont > 0) {
    cont--;
    digitalWrite(pinLeds[cont], LOW);
  }

  if (! digitalRead(pinPushbuttonLed)) {
    digitalWrite(pinLed, HIGH);
    if (cont > 0) {
      digitalWrite(pinLed, HIGH);
      delay(cont * 200);
      digitalWrite(pinLed, LOW);
    }
  } else {
    digitalWrite(pinLed, LOW);
  }

  Serial.print(cont);
	delay(200);
}
