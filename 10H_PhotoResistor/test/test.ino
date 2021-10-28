#include <FastLED.h>

#define LED_PIN     5
#define NUM_LEDS    6
#define BRIGHTNESS  64
#define LED_TYPE    WS2812
#define COLOR_ORDER GRB
CRGB leds[NUM_LEDS];

#define UPDATES_PER_SECOND 100

CRGBPalette16 p = {0x114F68, 0x84DEFF, 0x409DBF, 0x107496, 0x114F68, 0x84DEFF, 0x409DBF, 0x107496,
                    0x114F68, 0x84DEFF, 0x409DBF, 0x107496, 0x114F68, 0x84DEFF, 0x409DBF, 0x107496};
void setup() {
  // put your setup code here, to run once:
  delay(3000);
  Serial.println("hi");
  FastLED.addLeds<LED_TYPE, LED_PIN, COLOR_ORDER>(leds, NUM_LEDS).setCorrection(TypicalLEDStrip);
  FastLED.setBrightness(BRIGHTNESS);
}

void loop()
{
    
    static uint8_t startIndex = 0;
    startIndex = startIndex + 1; /* motion speed */
    
    FillLEDsFromPaletteColors( startIndex);
    
    FastLED.show();
    FastLED.delay(1000 / UPDATES_PER_SECOND);
}

void FillLEDsFromPaletteColors( uint8_t colorIndex)
{
    uint8_t brightness = 255;
    
    for( int i = 0; i < NUM_LEDS; ++i) {
        leds[i] = ColorFromPalette( p, colorIndex, brightness, LINEARBLEND);
        colorIndex += 3;
    }
}
