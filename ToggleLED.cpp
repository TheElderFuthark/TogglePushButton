const int PUSH_BUTTON = 0;
const int LED_RED = 1;


void setup() {
  pinMode(PUSH_BUTTON, INPUT);
  pinMode(LED_RED, OUTPUT);
}


void loop() {
  if (digitalRead(PUSH_BUTTON) == LOW) {
    digitalWrite(LED_RED, HIGH);
  } else {
    digitalWrite(LED_RED, LOW);
  }

}
