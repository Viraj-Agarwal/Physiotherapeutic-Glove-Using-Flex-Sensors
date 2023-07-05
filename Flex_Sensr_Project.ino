#include <Keyboard.h>


void setup() 
{
Serial.begin (9600);
// initialize control over the keyboard:
Keyboard.begin();
}

void loop() {
  int up = analogRead(A1); //Flex Sensor 1
  int down = analogRead(A3); //Flex Sensor 2 SWSWWWSW
  int left = analogRead(A0); // Flex Sensor 3
  int right = analogRead(A1); //Flex Sensor 4

  // if (up > 320 )
  // {
  //   Keyboard.write('W');
  //   delay(500);
  // } 

  // if (down > 400 )
  // {
  //   Keyboard.write('S');
  //   delay(500);
  // }

  if (left > 420)
  { //RIGHT
    Keyboard.press('D');
    delay(500);
    Keyboard.releaseAll();
  }

  if (right > 800)
  { //LEFT
    Keyboard.press('A');
    delay(500);
    Keyboard.releaseAll();
  }

}
