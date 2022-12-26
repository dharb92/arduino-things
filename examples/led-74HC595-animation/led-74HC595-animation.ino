#include <new_library.h>

int DATA = 8;
int LATCH = 9;
int CLOCK = 10;

boolean registers[8] = {0,0,0,0,0,0,0,0};

void setup() {
  pinMode(DATA, OUTPUT);
  pinMode(LATCH, OUTPUT);
  pinMode(CLOCK, OUTPUT);
  writereg();
}

void loop() {
  for(int i = 0; i < 9; i++) {
    registers[i] = HIGH;
    writereg();
    delay(100);
  }
  for(int i = 8; i >= 0; i--) {
    registers[i] = LOW;
    writereg();
    delay(100);
  }
}

void writereg() {
  digitalWrite(LATCH, LOW);
  for(int i = 7; i >= 0; i--) {
    digitalWrite(CLOCK, LOW);
    digitalWrite(DATA, registers[i]);
    digitalWrite(CLOCK, HIGH);
  }
  digitalWrite(LATCH, HIGH);
}