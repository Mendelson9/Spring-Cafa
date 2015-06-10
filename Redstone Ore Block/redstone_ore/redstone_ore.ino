//redstone ore lights up when activated for 68.27 seconds average.
//
int time = 12300; // eg 12.3 seconds would be 12300
int decay = time/128; 

void setup() {
  
  pinMode(10, OUTPUT);
  
}

void loop() {
  int rand = random(3);
  
  for(int bright = 128; bright > 0; bright--) {
    analogWrite(10, bright);
    delay(decay);
    if ( bright == 32 && rand == 1) {
      break;
    }
  }
  delay(1050 * rand); //time before lights turn on
}
