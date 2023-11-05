#include <Adafruit_NeoPixel.h>

#define LED_PIN    A3
#define LED_COUNT  108

// Initialize the NeoPixel strip
Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_RGBW + NEO_KHZ800);

void setup() {
  strip.begin();           // Initialize the strip
  strip.show();            // Turn off all the pixels
}

void loop() {
  // Chase a single green light down the LED strip
  for(int i = 0; i < strip.numPixels(); i++) { // For each pixel...
    strip.setPixelColor(i, strip.Color(255, 0, 0, 0)); // Set the pixel to green
    strip.show();                                   // Update the strip
    delay(50);                                      // Pause for a moment
    strip.setPixelColor(i, strip.Color(0, 0, 0, 0));   // Turn off the pixel
  }
  // After the last LED turns off, the loop function will restart from the beginning
}
