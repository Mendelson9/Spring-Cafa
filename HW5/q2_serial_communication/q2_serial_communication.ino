// Serial communication: read data from a PC and use it 
// to control an LED

int ledPin = 10;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int brightness;
  
  if (Serial.available()) {
    int val = Serial.read();
    if (val >= '0' && val <= '9') { // only numbers read from serial
      val = 25 * (val-'0'); // scale to 0, 25, 50
      analogWrite(ledPin, val);
  
 
  }
}
}

