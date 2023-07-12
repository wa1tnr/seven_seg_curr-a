// Wed 12 Jul 19:20:39 UTC 2023
// combined program and diagram - scroll to see

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

#if 0
$ 1 0.000049999999999999996 10.20027730826997 50 5 50 5e-11
418 320 -64 272 -64 0 1 40 5 0 0 0.5 pin\s8
418 320 -32 272 -32 0 1 40 5 0 0 0.5 pin\s9
418 320 0 272 0 0 1 40 5 0 0 0.5 pin\s10
418 320 32 272 32 0 1 40 5 0 0 0.5 pin\s11
418 320 64 272 64 0 1 40 5 0 0 0.5 pin\s12
162 384 -128 432 -128 2 default-led 1 0 0 0.01
r 496 -128 560 -128 0 500
g 752 128 752 176 0 0
r 496 -64 560 -64 0 500
162 384 -64 432 -64 2 default-led 1 0 0 0.01
162 384 0 432 0 2 default-led 1 0 0 0.01
r 496 0 560 0 0 500
r 496 64 560 64 0 500
162 384 64 432 64 2 default-led 1 0 0 0.01
162 384 128 432 128 2 default-led 1 0 0 0.01
r 496 128 560 128 0 500
s 496 -160 560 -160 0 1 false
s 496 -96 560 -96 0 1 false
s 496 -32 560 -32 0 1 false
s 496 32 560 32 0 1 false
s 496 96 560 96 0 1 false
w 496 -160 496 -128 0
w 560 -160 560 -128 0
w 496 -96 496 -64 0
w 560 -96 560 -64 0
w 496 -32 496 0 0
w 560 -32 560 0 0
w 496 32 496 64 0
w 560 32 560 64 0
w 496 96 496 128 0
w 560 96 560 128 0
r 656 0 720 0 0 500
w 560 -128 624 -128 0
w 560 -64 624 -64 0
w 560 0 624 0 0
w 560 64 624 64 0
w 560 128 624 128 0
w 624 -128 624 -64 0
w 624 -64 624 0 0
w 624 0 624 64 0
w 624 64 624 128 0
w 752 0 752 128 0
w 720 0 752 0 0
w 720 -32 720 0 0
w 656 -32 656 0 0
s 656 -32 720 -32 0 0 false
w 624 0 656 0 0
w 432 -128 496 -128 0
w 432 -64 496 -64 0
w 432 0 496 0 0
w 432 64 496 64 0
w 432 128 496 128 0
w 320 0 384 0 0
w 320 32 352 32 0
w 352 32 352 64 0
w 352 64 384 64 0
w 320 64 320 128 0
w 320 128 384 128 0
w 320 -32 352 -32 0
w 352 -32 352 -64 0
w 352 -64 384 -64 0
w 320 -64 320 -128 0
w 320 -128 384 -128 0

#endif
