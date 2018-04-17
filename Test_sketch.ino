#include "Constants.h"

/* Each block of code in this program represents a note.
*
* The tone() function sends a pulse of a specific frequency through the desired port. 
* In order to properly call this function, you need to include two arguments, the port and the frequency. 
* 
* delay() 
*
*
* noTone()
*
*
***** FUNCTION REFERENCE *****
tone(port, frequency);
delay(milliseconds);
noTone(milliseconds);
*/
void loop() {
//This program is designed to play Row Row Row your boat

  //CCCDE "Row, row, row your boat"
  
  tone(PORT,C4); 
  delay(400);
  noTone(PORT);
  delay(100);

  tone(PORT,C4);
  delay(400);
  noTone(PORT);
  delay(100);

  tone(PORT,C4);
  delay(300);
  noTone(PORT);
  delay(60);

  tone(PORT,D4);
  delay(200);
  noTone(PORT); //I decided to not add a second delay for this specific note.

  tone(PORT,E4);
  delay(200);
  noTone(PORT);
  delay(300);
  
  //EDEFG "Gently down the stream"
  
  
  tone(PORT,E4);
  delay(200);
  noTone(PORT);
  delay(60);

  tone(PORT,D4);
  delay(200);
  noTone(PORT);
  delay(20);

  tone(PORT,E4);
  delay(200);
  noTone(PORT);
  delay(60);

  tone(PORT,F4);
  delay(200);
  noTone(PORT);
  delay(20);

  tone(PORT,G4);
  delay(200);
  noTone(PORT);
  delay(600);

  //CCCGGGEEECCC "Merrily merrily merrily merrily"
  
  tone(PORT,C5);
  delay(200);
  noTone(PORT);
  delay(10);

  tone(PORT,C5);
  delay(200);
  noTone(PORT);
  delay(10);

  tone(PORT,C5);
  delay(200);
  noTone(PORT);
  delay(10);

  
  tone(PORT,G4);
  delay(200);
  noTone(PORT);
  delay(10);

  tone(PORT,G4);
  delay(200);
  noTone(PORT);
  delay(10);

  tone(PORT,G4);
  delay(200);
  noTone(PORT);
  delay(10);
  

  tone(PORT,E4);
  delay(200);
  noTone(PORT);
  delay(10);

  tone(PORT,E4);
  delay(200);
  noTone(PORT);
  delay(10);
  
  tone(PORT,E4);
  delay(200);
  noTone(PORT);
  delay(10);
  
   
  tone(PORT,C4);
  delay(200);
  noTone(PORT);
  delay(10);

  tone(PORT,C4);
  delay(200);
  noTone(PORT);
  delay(10);

  tone(PORT,C4);
  delay(200);
  noTone(PORT);
  delay(10);
  
  //GFEDC "Life is but a dream"
  
  tone(PORT,G4);
  delay(200);
  noTone(PORT);
  delay(60);

  tone(PORT,F4);
  delay(200);
  noTone(PORT);
  delay(20);

  tone(PORT,E4);
  delay(200);
  noTone(PORT);
  delay(60);

  tone(PORT,D4);
  delay(200);
  noTone(PORT);
  delay(60);

  tone(PORT,C4);
  delay(200);
  noTone(PORT);
  delay(1000);
}
