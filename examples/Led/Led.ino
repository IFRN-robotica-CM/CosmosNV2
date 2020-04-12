#include "CosmosNV2.h"

Led led(13);

void setup() {
  
}

void loop() {
  led.acender();
  delay(1000);
  
  led.apagar();
  delay(1000);
}