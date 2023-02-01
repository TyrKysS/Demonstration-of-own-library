#include <LedLibrary.h>

// Vytvoření instancí
LedLibrary rgbstrip(4, 144);
LedLibrary LED(13);

void setup() {
  rgbstrip.red();
  rgbstrip.blue();
  rgbstrip.green();
  rgbstrip.off();
}

void loop() {
  rgbstrip.fade();
  LED.ledON();
  delay(10);
  LED.ledOFF();
  delay(10);
}
