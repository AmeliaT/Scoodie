#include "Adafruit_WS2801.h"
#include "SPI.h" // Comment out this line if using Trinket or Gemma
#ifdef __AVR_ATtiny85__
#include <avr/power.h>
#endif
#define Brightness 15 //Set brightness to 1/10th
#define Full (255/Brightness)

/*****************************************************************************
Example sketch for driving Adafruit WS2801 pixels!
 
 
  Designed specifically to work with the Adafruit RGB Pixels!
  12mm Bullet shape ----> https://www.adafruit.com/products/322
  12mm Flat shape   ----> https://www.adafruit.com/products/738
  36mm Square shape ----> https://www.adafruit.com/products/683
 
  These pixels use SPI to transmit the color data, and have built in
  high speed PWM drivers for 24 bit color per pixel
  2 pins are required to interface
 
  Adafruit invests time and resources providing this open source code, 
  please support Adafruit and open-source hardware by purchasing 
  products from Adafruit!
 
  Written by Limor Fried/Ladyada for Adafruit Industries.  
  BSD license, all text above must be included in any redistribution
 
*****************************************************************************/
 
// Choose which 2 pins you will use for output.
// Can be any valid output pins.
// The colors of the wires may be totally different so
// BE SURE TO CHECK YOUR PIXELS TO SEE WHICH WIRES TO USE!
uint8_t dataPin  = 10;    // Yellow wire on Adafruit Pixels
uint8_t clockPin = 9;    // Green wire on Adafruit Pixels

// Here is where you can put in your favorite colors that will appear!
// just add new {nnn, nnn, nnn}, lines. They will be picked out randomly
//                          R   G   B
uint8_t myColors[][5] = {{30, 144, 255},   // dodger blue
                         {232, 100, 255},   // purple
                         {204, 0, 204},   // pink
                         {200, 200, 20},   // yellow 
                         {30, 200, 200},   // blue
                         };

Adafruit_WS2801 strip = Adafruit_WS2801(19, dataPin, clockPin);

void setup() {
#if defined(__AVR_ATtiny85__) && (F_CPU == 16000000L)
  clock_prescale_set(clock_div_1); // Enable 16 MHz on Trinket
#endif
#define FAVCOLORS sizeof(myColors) / 5
  strip.begin();

  // Update LED contents, to start they are all 'off'
  strip.show();
}


void loop() {
  flashRandom(10, 300);
  colorWipe(Color(182, 0, 250), 75);  //purple
  bouncer(Color(82, 61, 216), 100); //blue
  colorWipe(Color(232, 0, 116), 75);  //pink
  bouncer(Color(182, 0, 250), 100); //dark pink
  colorWipe(Color(230, 0, 255), 75);  //purple
  bouncer(Color(169, 0, 232), 100); //light purple
  ReverseColorWipe(Color(56, 13, 253), 75);  //blue
  randomWhite (50, 200);// 50 sets of random grayscale
  flashRandom(10, 100);
  colorWipe(Color(56, 13, 253), 75);  // dark purple
  bouncer(Color(56,112,243), 100); //blue
  colorWipe(Color(110, 11, 228), 75);  // dark purple
  ReverseColorWipe(Color(232, 0, 116), 75);  // light pink 
  RandomColor(100, 200);// 50 sets of random colors
  flashRandom(10, 100);
  colorWipe(Color(232, 0, 116), 75);  //light pink
  ReverseColorWipe(Color(116, 0, 255), 75);  // dark purple
  colorWipe(Color(169, 0, 232), 75);  //light purple
  ReverseColorWipe(Color(255, 13, 255), 75);  //dark pink
  colorWipe(Color(253, 13, 133), 75);  //hot pink
  ReverseColorWipe(Color(182, 0, 250), 75);  //purple
  colorWipe(Color(110, 11, 228), 75);  // dark purple
  ReverseColorWipe(Color(228, 11, 200), 75);  //magenta
  colorWipe(Color(56, 13, 253), 75);  //blue
  ReverseColorWipe(Color(127,127,127), 75);  //white
  colorWipe(Color(127,127,127), 75);  //white
  rainbow(100);
  colorWave(100);
  colorWipe(Color(232, 0, 116), 75);  //light pink
  ReverseColorWipe(Color(116, 0, 255), 75);  // dark purple
  colorWipe(Color(169, 0, 232), 75);  //light purple
  ReverseColorWipe(Color(255, 13, 255), 75);  //dark pink
  colorWipe(Color(253, 13, 133), 75);  //hot pink
  RainbowStripe(1,7,100);//#cycles, #pixels wide, delay
  RainbowStripe(1,6,100);//#cycles, #pixels wide, delay
  RainbowStripe(1,5,100);//#cycles, #pixels wide, delay
  RainbowStripe(1,4,100);//#cycles, #pixels wide, delay
  RainbowStripe(1,3,100);//#cycles, #pixels wide, delay
  RainbowStripe(1,2,100);//#cycles, #pixels wide, delay
  RainbowStripe(1,2,100);//#cycles, #pixels wide, delay
  RainbowStripe(1,1,100);//#cycles, #pixels wide, delay
  RainbowStripe(1,1,100);//#cycles, #pixels wide, delay
  RainbowStripe(1,1,100);//#cycles, #pixels wide, delay
  RainbowStripe(1,1,100);//#cycles, #pixels wide, delay
  RainbowStripe(1,2,100);//#cycles, #pixels wide, delay
  RainbowStripe(1,2,100);//#cycles, #pixels wide, delay
  RainbowStripe(1,3,100);//#cycles, #pixels wide, delay
  RainbowStripe(1,4,100);//#cycles, #pixels wide, delay
  RainbowStripe(1,5,100);//#cycles, #pixels wide, delay
  RainbowStripe(1,6,100);//#cycles, #pixels wide, delay
  RainbowStripe(1,7,100);//#cycles, #pixels wide, delay
  flashRandom(10, 100);
  ReverseColorWipe(Color(182, 0, 250), 75);  //purple
  colorWipe(Color(110, 11, 228), 75);  // dark purple
  ReverseColorWipe(Color(228, 11, 228), 75);  //magenta
  bouncer(Color(45,219,250), 100); //pretty blue
  colorWipe(Color(56, 13, 253), 75);  //blue
  bouncer(Color(45,219,250), 100); //pretty blue
  colorWipe(Color(125, 125, 125), 75);  //white
  colorWipe(Color(125, 125, 125), 75);  //white
  rainbow(100);
  colorWipe(Color(232, 0, 116), 75);  //light pink
  ReverseColorWipe(Color(116, 0, 255), 75);  // dark purple
  colorWipe(Color(169, 0, 232), 75);  //light purple
  ReverseColorWipe(Color(255, 13, 255), 75);  //dark pink
  colorWipe(Color(253, 13, 133), 75);  //hot pink
  ReverseColorWipe(Color(182, 0, 250), 75);  //purple
  colorWipe(Color(110, 11, 228), 75);  // dark purple
  ReverseColorWipe(Color(228, 11, 228), 75);  //magenta
  rainbow(100);
  colorWave(100);
  colorWipe(Color(56, 13, 253), 75);  //blue
  bouncer(Color(232, 0, 116), 100); //light pink
  colorWipe(Color(253, 13, 133), 75);  //hot pink
  bouncer(Color(116, 0, 255), 100); //dark purple
  colorWipe(Color(182, 0, 250), 75);  //purple
  bouncer(Color(169, 0, 232), 100); //light purple
  colorWipe(Color(110, 11, 228), 75);  // dark purple
  bouncer(Color(255, 13, 255), 100); //dark pink
  colorWipe(Color(228, 11, 228), 75);  //magenta
  colorWipe(Color(56, 13, 253), 75);  //blue
  rainbowCycle(75);
  flashRandom(10, 100);
  randomWhite (50, 200);// 50 sets of random grayscale
  theaterChase(Color(127, 127, 127), 200); // White
  theaterChaseRainbow(200);
  flashRandom(10, 100);
  perimetros(Color(56,112,243),100); //blew blue
  colorWipe(Color(110, 11, 228), 75);  // dark purple
  bouncer(Color(136,127,220), 100); //pretty purple
  ReverseColorWipe(Color(228, 11, 228), 75);  //magenta
  bouncer(Color(136,127,220), 100); //pretty purple
  flashRandom(10, 100);
}


void flashRandom(int wait, uint8_t howmany) {
 
  for(uint16_t i=0; i<howmany; i++) {
    // pick a random favorite color!
    int c = random(FAVCOLORS);
    int red = myColors[c][0];
    int green = myColors[c][1];
    int blue = myColors[c][2]; 
 
    // get a random pixel from the list
    int j = random(strip.numPixels());
    
    // now we will 'fade' it in 5 steps
    for (int x=0; x < 5; x++) {
      int r = red * (x+1); r /= 5;
      int g = green * (x+1); g /= 5;
      int b = blue * (x+1); b /= 5;
      
      strip.setPixelColor(j, Color(r, g, b));
      strip.show();
      delay(wait);
    }
    // & fade out in 5 steps
    for (int x=5; x >= 0; x--) {
      int r = red * x; r /= 5;
      int g = green * x; g /= 5;
      int b = blue * x; b /= 5;
      
      strip.setPixelColor(j, Color(r, g, b));
      strip.show();
      delay(wait);
    }
  }
  // LEDs will be off when done (they are faded to 0)
}
// Fill the dots one after the other with a color
void colorWipe(uint32_t c, uint8_t wait) {
  for(uint16_t i=0; i<strip.numPixels(); i++) {
      strip.setPixelColor(i, c);
      strip.show();
      delay(wait);
  }
}

void rainbow(uint8_t wait) {
  uint16_t i, j;

  for(j=0; j<256; j++) {
    for(i=0; i<strip.numPixels(); i++) {
      strip.setPixelColor(i, Wheel((i+j) & 255));
    }
    strip.show();
    delay(wait);
  }
}

// Slightly different, this makes the rainbow equally distributed throughout
void rainbowCycle(uint8_t wait) {
  uint16_t i, j;

  for(j=0; j<256*5; j++) { // 5 cycles of all colors on wheel
    for(i=0; i< strip.numPixels(); i++) {
      strip.setPixelColor(i, Wheel(((i * 256 / strip.numPixels()) + j) & 255));
    }
    strip.show();
    delay(wait);
  }
}

//Theatre-style crawling lights.
void theaterChase(uint32_t c, uint8_t wait) {
  for (int j=0; j<10; j++) {  //do 10 cycles of chasing
    for (int q=0; q < 3; q++) {
      for (int i=0; i < strip.numPixels(); i=i+3) {
        strip.setPixelColor(i+q, c);    //turn every third pixel on
      }
      strip.show();
     
      delay(wait);
     
      for (int i=0; i < strip.numPixels(); i=i+3) {
        strip.setPixelColor(i+q, 0);        //turn every third pixel off
      }
    }
  }
}

//Theatre-style crawling lights with rainbow effect
void theaterChaseRainbow(uint8_t wait) {
  for (int j=0; j < 256; j++) {     // cycle all 256 colors in the wheel
    for (int q=0; q < 3; q++) {
        for (int i=0; i < strip.numPixels(); i=i+3) {
          strip.setPixelColor(i+q, Wheel( (i+j) % 255));    //turn every third pixel on
        }
        strip.show();
       
        delay(wait);
       
        for (int i=0; i < strip.numPixels(); i=i+3) {
          strip.setPixelColor(i+q, 0);        //turn every third pixel off
        }
    }
  }
}

void RainbowStripe (int sets,int width,int wait) {
  int L;
  for(int j=0;j<(sets*width*6);j++) {
    for(int i=0;i< strip.numPixels();i++) {
      L=strip.numPixels()-i-1;
      switch ( ( (i+j)/width) % 6 ) {
        case 0: strip.setPixelColor(L,Full,0,0);break;//Red
        case 1: strip.setPixelColor(L,Full,Full,0);break;//Yellow
        case 2: strip.setPixelColor(L,0,Full,0);break;//Green
        case 3: strip.setPixelColor(L,0,Full,Full);break;//Cyan
        case 4: strip.setPixelColor(L,0,0,Full);break;//Blue
        case 5: strip.setPixelColor(L,Full,0,Full);break;//Magenta
//        default: strip.setPixelColor(L,0,0,0);//Use for debugging only
      }
    };
    strip.show();
    delay(wait);
  };
};



/* Helper functions */

// Create a 24 bit color value from R,G,B
uint32_t Color(byte r, byte g, byte b)
{
  uint32_t c;
  c = r;
  c <<= 8;
  c |= g;
  c <<= 8;
  c |= b;
  return c;
}
  void colorWave(uint8_t wait) {
  int i, j, stripsize, cycle;
  float ang, rsin, gsin, bsin, offset;
 
  static int tick = 0;
  
  stripsize = strip.numPixels();
  cycle = stripsize * 25; // times around the circle...
 
  while (++tick % cycle) {
    offset = map2PI(tick);
 
    for (i = 0; i < stripsize; i++) {
      ang = map2PI(i) - offset;
      rsin = sin(ang);
      gsin = sin(2.0 * ang / 3.0 + map2PI(int(stripsize/6)));
      bsin = sin(4.0 * ang / 5.0 + map2PI(int(stripsize/3)));
      strip.setPixelColor(i, Color(trigScale(rsin), trigScale(gsin), trigScale(bsin)));
    }
 
    strip.show();
    delay(wait);
  }
 
}
 
/**
 * Scale a value returned from a trig function to a byte value.
 * [-1, +1] -> [0, 254] 
 * Note that we ignore the possible value of 255, for efficiency,
 * and because nobody will be able to differentiate between the
 * brightness levels of 254 and 255.
 */
byte trigScale(float val) {
  val += 1.0; // move range to [0.0, 2.0]
  val *= 127.0; // move range to [0.0, 254.0]
 
  return int(val) & 255;
}
 
/**
 * Map an integer so that [0, striplength] -> [0, 2PI]
 */
float map2PI(int i) {
  return PI*2.0*float(i) / float(strip.numPixels());
}

void bouncer(uint32_t c, uint8_t wait) {
  int i;
  
  for (i=0; i < strip.numPixels()+1; i++) { // added the +1 so the last pixel would also go out.
      strip.setPixelColor(i, c);
      if (i>0);
      strip.setPixelColor(i-1, 0);
      strip.show();
      delay(wait-i);
  }
  for (i=strip.numPixels(); i > 0; i--) { //bounce back
      strip.setPixelColor(i, c);
      strip.setPixelColor(i+1, 0);
      strip.show();
      delay(wait-i);
  }
}

void perimetros (uint32_t c, uint8_t wait)
{
  for(int j = 1; j < 5; j++)
  {
    int i;
    for (i = 3; i < 8; i++)
    {
      strip.setPixelColor(i, c);
      strip.show();
      delay(wait);
    }
    for (i = 15; i > 12 ; i--)
    {
      strip.setPixelColor(i, c);
      strip.show();
      delay(wait);
    }
    for (i = 17; i < 24; i++)
    {
      if (i > 19 && i < 24)
      {
        strip.setPixelColor(i, (Color(255, 0, 0), 50));
      }
      else
      {
        strip.setPixelColor(i, c);
      }
      strip.show();
      delay(wait);
    }

    strip.setPixelColor(16, c);
    strip.show();
    delay(wait);

    for (i = 12; i > 7; i--)
    {
      strip.setPixelColor(i, c);
      strip.show();
      delay(wait);
    }
    for (i = 0; i < 3; i++)
    {
      strip.setPixelColor(i, c);
      strip.show();
      delay(wait);
    }
    clearall();
  }
}

void clearall ()
{
  for (int i = 0; i < 24; i++)
  {
    strip.setPixelColor(i, 0);
    strip.show();
    delay(100);
  }
}

void randomWhite (int sets, int wait){
  int V,i,j;
  for (i= 0;i<sets;i++){
    for (j=0;j<strip.numPixels();j++){
            V=random(100);
          strip.setPixelColor(j,V,V,V);
  }
    strip.show();
        delay(wait);
  }
};

//Create sets of random colors
void RandomColor (int sets, int wait) {
  int i,j;
  for (i=0;i<sets;i++) {
    for(j=0;j<strip.numPixels();j++) {
      strip.setPixelColor(j,random(100),random(50),random(255));
    }
    strip.show();
    delay(wait);
  }
};

//Input a value 0 to 255 to get a color value.
//The colours are a transition r - g -b - back to r
uint32_t Wheel(byte WheelPos)
{
  if (WheelPos < 85) {
   return Color(WheelPos * 3, 255 - WheelPos * 3, 0);
  } else if (WheelPos < 170) {
   WheelPos -= 85;
   return Color(255 - WheelPos * 3, 0, WheelPos * 3);
  } else {
   WheelPos -= 170; 
   return Color(0, WheelPos * 3, 255 - WheelPos * 3);
  }
}

void ReverseColorWipe(uint32_t c, uint8_t wait) {
  for(int i=(strip.numPixels()-1); i>=0; i--) {
      strip.setPixelColor(i, c);
      strip.show();
      delay(wait);
  }
}
