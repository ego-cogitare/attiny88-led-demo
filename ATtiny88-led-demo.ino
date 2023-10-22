#define PINS 16

void setup() {
  for (uint8_t i = 1; i <= PINS; i++) {
    pinMode(i, OUTPUT);  
  }
}

uint8_t pin = 1;
int8_t incr = 1;

void loop() {
    digitalWrite(pin, HIGH);
    delay(40);
    digitalWrite(pin, LOW);

    pin += incr;

    if (pin == PINS || pin == 1) {
      incr = -incr;
    }
}