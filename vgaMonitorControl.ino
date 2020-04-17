#include <Adafruit_GFX.h>  // include Adafruit graphics library
#include "VGA.h"           // include VGA library
#include "Circle.h"

// initialize the VGA library
VGA display = VGA();


//define Two Circle Object
CircleObj c1(10,20,10);
CircleObj c2(40,70,10);
 
void setup(void) {
  // initialize the VGA display
  display.begin();
 
  display.delay(5000);     // wait 5 seconds
  display.clearDisplay();  // clear the screen buffer
 
  display.setTextSize(1);
  display.setTextColor(WHITE);
}

void loop() {
      display.clearDisplay();  // clear the screen buffer
      display.setTextSize(1);
      display.setTextColor(WHITE);
      display.drawCircle(c1.x,c1.y,c1.r,WHITE);
      display.drawCircle(c2.x,c2.y,c2.r,WHITE);
      //Increment circle Position
      c1.incX();
      c1.incY();
      //Check Collision
      c1.check();
      //Increment Circle position
      c2.incX();
      c2.incY();
      //Check Collision
      c2.check();
      //Make a small delay
      delay(500);
  
}
