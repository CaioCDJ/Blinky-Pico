#include "pico/stdlib.h"
#include <stdio.h>

int main() {

  const uint ledPin = 25;

  gpio_init(ledPin);
  gpio_set_dir(ledPin, GPIO_OUT);

  while (true) {
    gpio_put(ledPin, true);
    sleep_ms(100);
    gpio_put(ledPin, false);
    sleep_ms(100);
  }
  return 0;
}
