 #include <SwitchControlLibrary.h>
 
 void setup(){
   SwitchControlLibrary().pressButton(Button::R);
   delay(50);
   SwitchControlLibrary().releaseButton(Button::R);
   delay(500);
   SwitchControlLibrary().pressButton(Button::L);
   delay(50);
   SwitchControlLibrary().releaseButton(Button::L);
   delay(500);
   SwitchControlLibrary().pressButton(Button::R);
   delay(50);
   SwitchControlLibrary().releaseButton(Button::R);
   delay(500);
   SwitchControlLibrary().pressButton(Button::R);
   delay(50);
   SwitchControlLibrary().releaseButton(Button::R);
   delay(500);
   SwitchControlLibrary().pressButton(Button::L);
   delay(50);
   SwitchControlLibrary().releaseButton(Button::L);
   delay(500);
   SwitchControlLibrary().pressButton(Button::R);
   delay(50);
   SwitchControlLibrary().releaseButton(Button::R);
   delay(1500);
 }
