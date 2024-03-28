#include <Arduino.h>
#include "FastLED.h"
#define NUM_LEDS 29
// pin for lolin32
#define LED_PIN 33 
// pin for arduino micro
// #define LED_PIN 6
CRGB leds[NUM_LEDS];

// we had a visitor at virtua gallery
// seaking derangements a podcast 
// @sensative_jock
// show pig - babe pig in the city + show girls 

uint8_t colorOffset = 0;
uint8_t changeRate = 12;

#define ONBOARD_LED 5


void setup() {
  FastLED.addLeds<NEOPIXEL, LED_PIN>(leds, NUM_LEDS);
  Serial.begin(115200);
}

void loop() {
  for(int i = 0; i < NUM_LEDS; i ++) {
    leds[i] = CHSV(colorOffset + (uint8_t)i*2, 255, 255);
    FastLED.show(); 
    delay(10);
  }
  colorOffset += changeRate;
}