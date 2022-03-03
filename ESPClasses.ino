#include "output.h"
IO io(13);

void setup() {
  Serial.begin(9600);
}

void loop() {
  io.onLED();
  delay(500);
  io.offLED();
  delay(500);
}
