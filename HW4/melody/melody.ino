
#include "pitches.h"

// notes in the melody:
int melody[] = {
  nF5, nE5, nE5, nG4, nA4, nF5, nE5, nE5, nNO, nF5, nE5, nE5,nD5, nE5, nF5, nGS5, nG5, nF5 };

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  4,8,1,4,4,4,8,1,8,4,8,1,4,4,1,3,4,4 };

void setup() {
}

// song is designed to loop
void loop() {
// iterate over the notes of the melody:
  for (int thisNote = 0; thisNote < 18; thisNote++) {
    //18 = how many notes will play in melody[]
    
    // when the same note is played twice in a row, insert an extra small delay so you can tell when the end/beggining are.
    if (melody[thisNote] == melody[thisNote + 1]) {
     delay(50);
  } 

    // to calculate the note duration, take one second
    // divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000/noteDurations[thisNote];
    tone(8, melody[thisNote],noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    

    
    noTone(8);
  }
}
