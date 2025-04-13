#define TFT_eSPI_DEBUG
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();           
#include "ladybug.h"

void setup(void) {
  Serial.begin (9600);
  Serial.print ("ST7789 TFT Bitmap Test");

  tft.begin ();                                 // initialize a ST7789 chip
  tft.setSwapBytes (true);                      // swap the byte order for pushImage() - corrects endianness

  tft.setRotation(3);
  tft.fillScreen (TFT_BLACK);
  tft.pushImage (0,0,240,240,ladybug);
}

void loop() { }