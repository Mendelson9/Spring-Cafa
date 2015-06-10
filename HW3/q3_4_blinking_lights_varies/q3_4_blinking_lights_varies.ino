// Make an LED display with four LEDs such that each second,
// one of the four chosen at random is on
// and the others are off.


void setup() {
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
pinMode(12, OUTPUT);
pinMode(13, OUTPUT);

digitalWrite (10, LOW);
digitalWrite (11, LOW);
digitalWrite (12, LOW);
digitalWrite (13, LOW);
}

void loop() {
  
  // random function will choose between pin 10 to 13
  int lightChoice = random(10,14);
  
  digitalWrite(lightChoice, HIGH);
  delay(1000);
  digitalWrite(lightChoice, LOW);

  
}
