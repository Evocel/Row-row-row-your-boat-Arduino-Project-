/* This program is designed to play Row, row, row your boat using an Arduino which transmits a frequency 
*  to a Piezo-resistor.
*/

#include "Constants.h" // I used this Constants.h file to declare the frequencies of every note I used,
                       // as well as the DIGITAL(PWM~) port I used. 


/*Each block of code in this program represents a note. 
*
* The tone() function sends a pulse of a specific frequency through the desired port. 
* In order to properly call this function, you need to include two arguments: the port and the frequency. 
* 
* The delay() function serves as a time delay between commands. In this program, it is used to 
* specify how long a note will play and how long the Arduino will wait before playing the next note.
*
* The noTone() function tells the Arduino to stop sending a pulse through the specified port.
* Calling this function stops playing the note you began playing with tone().
*
*
             ********* FUNCTION REFERENCE *********                     ********* FUNCTION REFERENCE *********
*     tone(port, frequency);
*     delay(milliseconds);
*     noTone(port);
*/
void loop() {

  //CCCDE "Row, row, row your boat"
  
  tone(PORT,C4);  // I play the note C4 through my port
  delay(400);     // The note C4 plays for .4 seconds
  noTone(PORT);   // I stop playing C4
  delay(100);     // The Arduino waits .1 seconds before the next note

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
  noTone(PORT);    // I decided to not add a second delay for this specific note.

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

  // The next part of the program begins playing in a higher octave
  // CCCGGGEEECCC "Merrily merrily merrily merrily"
  
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
  
  // Now the song returns to its original octave
  // GFEDC "Life is but a dream"
  
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

