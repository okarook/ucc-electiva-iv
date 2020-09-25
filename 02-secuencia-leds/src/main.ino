int pinA[5] = {13, 12, 11, 10, 9};
int pinB[5] = {7, 6, 5, 4, 3};
bool state = false;

void setup() {
  for (int i = 0; i < 5; i++) {
    pinMode(pinA[i], OUTPUT);
    pinMode(pinB[i], OUTPUT);
  }
}

void loop() {
  state = !state;
  for (int i = 0; i < 5; i++) {
    digitalWrite(pinA[i], state);
    digitalWrite(pinB[i], state);
    delay(1000);
  }
}
