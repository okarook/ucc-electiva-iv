int pinPushbuttonA[2] = {5, 3};
int pinPushbuttonB[2] = {2, 1};
int pinLineA[4] = {6, 7, 8, 9};
int pinLineB[4] = {10, 11, 12, 13};
const int pintPushbuttonResult = 4;
const int pintLedResult = 0;
int numA = 0;
int numB = 0;
int result = 0;

void setup()
{
  for (int i = 0; i < 2; i++) {
    pinMode(pinPushbuttonA[i], INPUT_PULLUP);
    pinMode(pinPushbuttonB[i], INPUT_PULLUP);
  }

  for (int i = 0; i < 4; i++) {
    pinMode(pinLineA[i], OUTPUT);
    pinMode(pinLineB[i], OUTPUT);
  }

  pinMode(pintPushbuttonResult, INPUT_PULLUP);
  pinMode(pintLedResult, OUTPUT);
}

void loop()
{
  numA = lineControl(pinPushbuttonA, pinLineA, numA);
  numB = lineControl(pinPushbuttonB, pinLineB, numB);

  if (! digitalRead(pintPushbuttonResult)) {
    result = numA + numB;
    for (int i = 0; i < result; i++) {
      digitalWrite(pintLedResult, HIGH);
      delay(1000);
      digitalWrite(pintLedResult, LOW);
      delay(1000);
    }
  }

  delay(200);
}

int lineControl(int pinPushbutton[2], int pinLine[4], int num)
{
  if (! digitalRead(pinPushbutton[0]) && num > 0) {
    num--;
    digitalWrite(pinLine[num], LOW);
  }

  if (! digitalRead(pinPushbutton[1]) && num < 4) {
    digitalWrite(pinLine[num], HIGH);
    num++;
  }
  return num;
}
