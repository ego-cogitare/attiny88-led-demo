#define PINS 16
#define MAX_DELAY 100
#define MIN_DELAY 1

void setup() {
  for (uint8_t i = 1; i <= PINS; i++) {
    pinMode(i, OUTPUT);  
  }
}

uint8_t pin = 1;
int8_t incr = 1;
uint8_t del = MIN_DELAY;
uint32_t i = 0;
bool avers = true;

void loop() {
    digitalWrite(pin, HIGH);
    delay(del);
    digitalWrite(pin, LOW);
    pin += incr;
    if (pin == PINS || pin == 1) {
      incr = -incr;
    }

    i++;
    if (i > pow(MAX_DELAY, 1.02) / pow(del, 1.02)) {
      del += avers ? 1 : -1;
      i = 0;
    }

    if (del == MAX_DELAY) {
      avers = false;
    } else if (del == MIN_DELAY) {
      avers = true;
    }
}
