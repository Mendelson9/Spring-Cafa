// Question 1:Make a display with four LEDs that blink, 
// where each each second each LED can turn on or not 
// depending on a random number

void setup() {
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
pinMode(12, OUTPUT);
pinMode(13, OUTPUT);
}

void loop() {
  int light1 = random(2);
  int light2 = random(2);
  int light3 = random(2);
  int light4 = random(2);
  
  if (light1 = 0) {
    digitalWrite(10, LOW);
  }
  else {
    digitalWrite(10, HIGH);
  }
  
  
  if (light2 = 0) {
    digitalWrite(11, LOW);
  }
  else {
    digitalWrite(11, HIGH);
  }
  
  
 
  if (light3 = 0) {
    digitalWrite(12, LOW);
  }
  else {
    digitalWrite(12, HIGH);
  }
  
    
  if (light4 = 0) {
    digitalWrite(13, LOW);
  }
  else {
    digitalWrite(13, HIGH);
  }
  
  delay(1000);

  
  
}
