/*

HW2 Q2
 Write a traffic light controller with a timer:

You have 4 LEDs: 2 red and 2 green, every 2 seconds, the lights change.  When the traffic light
      changes from red to green, there is no overlap.  When the traffic light changes from green to red,
      both green and red are on together for 0.5 sec before it is just red.  When it is only red, the other
      one switches to green.
  
*/
int timer = 2000; // two second timer
int red1 = 9;
int green1 = 10;
int red2 = 11;
int green2 = 13;

int toggle1 = HIGH;
int toggle2 = LOW;

void setup() {

	pinMode(red1, OUTPUT);
	pinMode(green1, OUTPUT);
	pinMode(red2, OUTPUT);
	pinMode(green2, OUTPUT);
}

void loop() {
	
	delay(500);
	
        digitalWrite(red1, HIGH);
        digitalWrite(green1, LOW);
	digitalWrite(red2, LOW);
	digitalWrite(green2, HIGH);

	delay(timer);

	digitalWrite(red1, HIGH);
	digitalWrite(green1, LOW);
	digitalWrite(red2, HIGH);
	digitalWrite(green2, HIGH);

	delay(500);
	
        digitalWrite(red1, LOW);
        digitalWrite(green1, HIGH);
	digitalWrite(red2, HIGH);
	digitalWrite(green2, LOW);

	delay(timer);

	digitalWrite(red1, HIGH);
	digitalWrite(green1, HIGH);
	digitalWrite(red2, HIGH);
	digitalWrite(green2, LOW);
}
