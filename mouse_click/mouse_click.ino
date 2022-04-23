#include <Mouse.h>



void setup() {
  pinMode(2, INPUT);
  //initiate the Mouse library
  
}

void loop() {
  //if the button is pressed, send a left mouse click
  if (digitalRead(2) == HIGH) {
    Mouse.begin();
  }
}
