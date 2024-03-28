#include <Arduino.h>
#include "FastLED.h"
#define NUM_LEDS 29
#define LED_PIN 33
CRGB leds[NUM_LEDS];


// seaking derangements a podcast 
// @sensative_jock
// show pig 


// put function declarations here:
int myFunction(int, int);
uint8_t colorOffset = 0;
uint8_t changeRate = 12;

#define ONBOARD_LED 5


void setup() {
  FastLED.addLeds<NEOPIXEL, LED_PIN>(leds, NUM_LEDS);

  // put your setup code here, to run once:
  int result = myFunction(2, 3);
  pinMode(ONBOARD_LED, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  for(int i = 0; i < NUM_LEDS; i ++) {
    leds[i] = CHSV(colorOffset + (uint8_t)i*2, 255, 255);
    FastLED.show(); 
    digitalWrite(ONBOARD_LED, LOW);
    //delay(4);
    // leds[i] = CRGB::Black; FastLED.show(); 
    digitalWrite(ONBOARD_LED, HIGH);
    

  }
  colorOffset += changeRate;

  // put your main code here, to run repeatedly:
  // for(int i = 0; i < 200; i ++) {
  //   Serial.println(".");
    
  //   digitalWrite(LED_PIN, HIGH);
  //   delay(i*8);
  //   digitalWrite(LED_PIN, LOW);
  //   delay(i);
  // }

  
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}