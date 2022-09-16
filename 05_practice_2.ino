# define PIN_LED 7
unsigned int toggle;
void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200);
  while (!Serial) {
  }
}

void loop() {
  toggle = 1;
  digitalWrite(PIN_LED, toggle);
  Serial.println("boot");
  delay(1000);

  toggle = toggle_state(toggle);
  digitalWrite(PIN_LED, toggle);
  delay(100);
  toggle = toggle_state(toggle);
  digitalWrite(PIN_LED, toggle);
  Serial.println("first");
  delay(100);

  toggle = toggle_state(toggle);
  digitalWrite(PIN_LED, toggle);
  delay(100);
  toggle = toggle_state(toggle);
  digitalWrite(PIN_LED, toggle);
  Serial.println("second");
  delay(100);

  toggle = toggle_state(toggle);
  digitalWrite(PIN_LED, toggle);
  delay(100);
  toggle = toggle_state(toggle);
  digitalWrite(PIN_LED, toggle);
  Serial.println("third");
  delay(100);

  toggle = toggle_state(toggle);
  digitalWrite(PIN_LED, toggle);
  delay(100);
  toggle = toggle_state(toggle);
  digitalWrite(PIN_LED, toggle);
  Serial.println("fourth");
  delay(100);

  toggle = toggle_state(toggle);
  digitalWrite(PIN_LED, toggle);
  delay(100);
  toggle = toggle_state(toggle);
  digitalWrite(PIN_LED, toggle);
  Serial.println("fifth");
  delay(100);

  toggle = toggle_state(toggle);
  digitalWrite(PIN_LED, toggle);
  while (1) {
  }
}

int toggle_state(int toggle) {
  if (toggle == 1) {
    return 0;
  }
  else
    return 1;
}
