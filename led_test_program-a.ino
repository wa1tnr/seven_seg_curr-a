// Wed 12 Jul 18:27:49 UTC 2023

/*
   Run the sim and monitor the current
   of a single LED.

   Toggle every switch.

   Run it again.
*/
const int step_time = 57;

void cut_all_leds() {
  int cut_led;
  for (cut_led = 8; cut_led < (12 + 1); cut_led++) {
  digitalWrite(cut_led, LOW);
  }
}

void add_lit_leds() {
  int j;
  for (j = 8; j < (12 + 1); j++) {
    digitalWrite(j, HIGH);
    delay(step_time);
  }
}

void one_at_a_time() {
  int i;
  for (i = 8; i < (12 + 1); i++) {
    digitalWrite(i, HIGH);
    delay(step_time);
    digitalWrite(i, LOW);
    delay(step_time);
  }
}

void setup() {
  Serial.begin(115200);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  cut_all_leds();
}

void loop() {
  // one_at_a_time();
  cut_all_leds();
  add_lit_leds();
  cut_all_leds();
  delay(step_time * 3);
}
