// PIN:[ON|OFF]
// ALL:[ON|OFF]

int pinLeds[10] = {13, 12, 11, 10, 9, 7, 6, 5, 4, 3};
String pin, action;

void setup() {
  Serial.begin(9600);
  for (int i = 0; i < 10; i++) {
    pinMode(pinLeds[i], OUTPUT);
  }
}

void loop() {
  if (Serial.available()) {
    pin = Serial.readStringUntil(':');
    action = Serial.readStringUntil(':');
    if (pin == "ALL") {
      for (int i = 0; i < 10; i++) {
        digitalWrite(pinLeds[i], action == "ON");
      }
    } else {
      digitalWrite(pin.toInt(), action == "ON");
    }

    Serial.print("DATA. PIN: " + pin + ", ACTION: " + action);
    Serial.println();
  }
  delay(1000);
}
