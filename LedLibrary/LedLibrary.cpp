#include "LedLibrary.h"
#include "Arduino.h"
#include "Adafruit_NeoPixel.h"

// Konstruktory
LedLibrary::LedLibrary(int pin, int numPixels) {
    _pin = pin;
    _numPixels = numPixels;
}
LedLibrary::LedLibrary(int pin) {
    _pin = pin;
    pinMode(pin, OUTPUT);
}

// Metody pro zhasnutí/rozsvícení LED
void LedLibrary::ledON() {
    digitalWrite(_pin, HIGH);
}

void LedLibrary::ledOFF() {
    digitalWrite(_pin, LOW);
}

// Metody pro zhasnutí nebo nastavení barvy RGB LED pásků NeoPixel
void LedLibrary::off() {
    Adafruit_NeoPixel pixels(_numPixels, _pin, NEO_GRB + NEO_KHZ800);
    pixels.begin();
    for(int i = 0; i < _numPixels; i++) {
    pixels.setPixelColor(i, pixels.Color(0, 0, 0));
    pixels.show();
    delay(10);
  }
}

void LedLibrary::red() {
    Adafruit_NeoPixel pixels(_numPixels, _pin, NEO_GRB + NEO_KHZ800);
    pixels.begin();
    for(int i = 0; i < _numPixels; i++) {
    pixels.setPixelColor(i, pixels.Color(10, 0, 0));
    pixels.show();
    delay(10);
  }
}

void LedLibrary::green() {
    Adafruit_NeoPixel pixels(_numPixels, _pin, NEO_GRB + NEO_KHZ800);
    pixels.begin();
    for(int i = 0; i < _numPixels; i++) {
    pixels.setPixelColor(i, pixels.Color(0, 10, 0));
    pixels.show();
    delay(10);
  }
}

void LedLibrary::blue() {
    Adafruit_NeoPixel pixels(_numPixels, _pin, NEO_GRB + NEO_KHZ800);
    pixels.begin();
    for(int i = 0; i < _numPixels; i++) {
    pixels.setPixelColor(i, pixels.Color(0, 0, 10));
    pixels.show();
    delay(10);
  }
}

// Barevný efekt RGB LED NeoPixel pásku dýchání. Výchozí barva je červená
void LedLibrary::fade() {
    Adafruit_NeoPixel pixels(_numPixels, _pin, NEO_GRB + NEO_KHZ800);
    pixels.begin();
    for (int i = 0; i < 256; i++) {
      for (int j = 0; j < _numPixels; j++) {
          pixels.setPixelColor(j, pixels.Color(i, 0, 0));
        }
        pixels.show();
        delay(10);
    }

    // Fade out
    for (int i = 255; i >= 0; i--) {
        for (int j = 0; j < _numPixels; j++) {
        pixels.setPixelColor(j, pixels.Color(i, 0, 0));
        }
        pixels.show();
        delay(10);
    } 
  }