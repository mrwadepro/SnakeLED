#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h>
#endif

#define PIN 6

// Parameter 1 = number of pixels in strip
// Parameter 2 = Arduino pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
//   NEO_RGBW    Pixels are wired for RGBW bitstream (NeoPixel RGBW products)
Adafruit_NeoPixel strip = Adafruit_NeoPixel(525, PIN, NEO_GRB + NEO_KHZ800);

void setup()
{
  // This is for Trinket 5V 16MHz, you can remove these three lines if you are not using a Trinket
#if defined (__AVR_ATtiny85__)
  if (F_CPU == 16000000) clock_prescale_set(clock_div_1);
#endif
  // End of trinket special code


  strip.begin();
  strip.show(); // Initialize all pixels to 'off'

}

void loop()
{
  //setGrid();
  snakeLogo();
}


void setGrid()
{

  //Top
  for (int i = 1; i <= 25; i++)
  {
    strip.setPixelColor(i, 0, 255, 0);

  }

  //Left Side
  for (int x = 25; x <= 525; x += 50)
  {
    strip.setPixelColor(x, 0, 255, 0);
  }

  for (int y = 26; y <= 476; y += 50)
  {
    strip.setPixelColor(y, 0, 255, 0);

  }




  //Right Side
  for (int i = 50; i <= 500; i += 50)
  {
    strip.setPixelColor(i, 0, 255, 0);

  }

  for (int l = 51; l <= 451; l += 50)
  {
    strip.setPixelColor(l, 0, 255, 0);

  }




  //Bottom
  for (int p = 477; p <= 499; p++)
  {
    strip.setPixelColor(p, 0, 255, 0);
    strip.show();
  }
}




void snakeLogo()
{
  //S
  strip.setPixelColor(77, 0, 255, 0);
  strip.setPixelColor(78, 0, 255, 0);
  strip.setPixelColor(79, 0, 255, 0);
  strip.setPixelColor(80, 0, 255, 0);
  strip.setPixelColor(124, 0, 255, 0);
  strip.setPixelColor(127, 0, 255, 0);
  strip.setPixelColor(174, 0, 255, 0);
  strip.setPixelColor(177, 0, 255, 0);
  strip.setPixelColor(178, 0, 255, 0);
  strip.setPixelColor(179, 0, 255, 0);
  strip.setPixelColor(180, 0, 255, 0);
  strip.setPixelColor(221, 0, 255, 0);
  strip.setPixelColor(230, 0, 255, 0);
  strip.setPixelColor(271, 0, 255, 0);
  strip.setPixelColor(280, 0, 255, 0);
  strip.setPixelColor(279, 0, 255, 0);
  strip.setPixelColor(278, 0, 255, 0);
  strip.setPixelColor(277, 0, 255, 0);



  //N
  strip.setPixelColor(82, 0, 255, 0);
  strip.setPixelColor(119, 0, 255, 0);
  strip.setPixelColor(132, 0, 255, 0);
  strip.setPixelColor(169, 0, 255, 0);
  strip.setPixelColor(182, 0, 255, 0);
  strip.setPixelColor(219, 0, 255, 0);
  strip.setPixelColor(232, 0, 255, 0);
  strip.setPixelColor(269, 0, 255, 0);
  strip.setPixelColor(282, 0, 255, 0);
  strip.setPixelColor(118, 0, 255, 0);
  strip.setPixelColor(117, 0, 255, 0);
  strip.setPixelColor(116, 0, 255, 0);
  strip.setPixelColor(135, 0, 255, 0);
  strip.setPixelColor(166, 0, 255, 0);
  strip.setPixelColor(185, 0, 255, 0);
  strip.setPixelColor(216, 0, 255, 0);
  strip.setPixelColor(235, 0, 255, 0);
  strip.setPixelColor(266, 0, 255, 0);
  strip.setPixelColor(285, 0, 255, 0);

  //A
  strip.setPixelColor(287, 0, 255, 0);
  strip.setPixelColor(264, 0, 255, 0);
  strip.setPixelColor(237, 0, 255, 0);
  strip.setPixelColor(214, 0, 255, 0);
  strip.setPixelColor(187, 0, 255, 0);
  strip.setPixelColor(164, 0, 255, 0);
  strip.setPixelColor(137, 0, 255, 0);
  strip.setPixelColor(114, 0, 255, 0);
  strip.setPixelColor(87, 0, 255, 0);
  strip.setPixelColor(88, 0, 255, 0);
  strip.setPixelColor(89, 0, 255, 0);
  strip.setPixelColor(90, 0, 255, 0);
  strip.setPixelColor(111, 0, 255, 0);
  strip.setPixelColor(140, 0, 255, 0);
  strip.setPixelColor(161, 0, 255, 0);
  strip.setPixelColor(190, 0, 255, 0);
  strip.setPixelColor(211, 0, 255, 0);
  strip.setPixelColor(240, 0, 255, 0);
  strip.setPixelColor(261, 0, 255, 0);
  strip.setPixelColor(290, 0, 255, 0);
  strip.setPixelColor(163, 0, 255, 0);
  strip.setPixelColor(162, 0, 255, 0);

  //K

  strip.setPixelColor(92, 0, 255, 0);
  strip.setPixelColor(109, 0, 255, 0);
  strip.setPixelColor(142, 0, 255, 0);
  strip.setPixelColor(159, 0, 255, 0);
  strip.setPixelColor(192, 0, 255, 0);
  strip.setPixelColor(209, 0, 255, 0);
  strip.setPixelColor(242, 0, 255, 0);
  strip.setPixelColor(259, 0, 255, 0);
  strip.setPixelColor(292, 0, 255, 0);
  strip.setPixelColor(106, 0, 255, 0);
  strip.setPixelColor(144, 0, 255, 0);
  strip.setPixelColor(158, 0, 255, 0);
  strip.setPixelColor(193, 0, 255, 0);
  strip.setPixelColor(207, 0, 255, 0);
  strip.setPixelColor(245, 0, 255, 0);
  strip.setPixelColor(256, 0, 255, 0);
  strip.setPixelColor(295, 0, 255, 0);

  //E
  strip.setPixelColor(100, 0, 255, 0);
  strip.setPixelColor(99, 0, 255, 0);
  strip.setPixelColor(98, 0, 255, 0);
  strip.setPixelColor(97, 0, 255, 0);
  strip.setPixelColor(104, 0, 255, 0);
  strip.setPixelColor(147, 0, 255, 0);
  strip.setPixelColor(154, 0, 255, 0);
  strip.setPixelColor(197, 0, 255, 0);
  strip.setPixelColor(198, 0, 255, 0);
  strip.setPixelColor(199, 0, 255, 0);
  strip.setPixelColor(200, 0, 255, 0);
  strip.setPixelColor(204, 0, 255, 0);
  strip.setPixelColor(247, 0, 255, 0);
  strip.setPixelColor(254, 0, 255, 0);
  strip.setPixelColor(297, 0, 255, 0);
  strip.setPixelColor(298, 0, 255, 0);
  strip.setPixelColor(299, 0, 255, 0);
  strip.setPixelColor(300, 0, 255, 0);

  strip.show();

}

