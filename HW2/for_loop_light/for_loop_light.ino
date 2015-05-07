/*
HW 2 Question 1
Blinks a light on and off randomly
does not use delay();

*/
int light = HIGH;
int randomNum;
void setup() {
  pinMode(13,OUTPUT);
}

void loop() {
  //this for loop acts as a delay by running loop 1000 times
  //probabbly inefficient.
  for(int i = 0; i < 1000; i++){
    randomNum = random(5);
  }
  
  if(randomNum > 2) {
    light = LOW;
  }
  else {
    light = HIGH;
  }
  digitalWrite(13, light);
  

}

