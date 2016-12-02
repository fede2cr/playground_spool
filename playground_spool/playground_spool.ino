#include <Adafruit_CircuitPlayground.h>

float X, Y, prevX, prevY, rotate = 0;
unsigned int wait_time = 20000; // from spool rotation speed, TODO
uint8_t playground_pixels = 10;
uint8_t pixeln = 0;

void setup() {
  Serial.begin(9600);
  CircuitPlayground.begin();
  delay(10000);
    for(int i=0; i<10; ++i) {
      CircuitPlayground.strip.setPixelColor(i, CircuitPlayground.colorWheel(255));
      CircuitPlayground.strip.show();
      delay(1000);
    }
    // Show all the pixels.
    
    CircuitPlayground.clearPixels();
  
  // delay animation to wait for print to start. Waits 3 minutes with a neopixel countdown.
}

void loop() {
  prevX = X;
  prevY = Y;
  X = CircuitPlayground.motionX();
  Y = CircuitPlayground.motionY();
  rotate = abs(prevX-X+prevY-Y);
  Serial.print("Rotate: ");
  Serial.println(rotate);
  delay(wait_time);
  bool slideSwitch = CircuitPlayground.slideSwitch();
  if (( rotate < 1 ) && (slideSwitch)) {
    for(int i=0; i<10; ++i) {
      CircuitPlayground.strip.setPixelColor(i, CircuitPlayground.colorWheel(255));
      CircuitPlayground.strip.show();
      delay(1000);
    }
      
  }
  
}
