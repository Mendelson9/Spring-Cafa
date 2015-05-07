/*
 Write a traffic light controller with a timer:

Starts with red light. switches to green, then yellow, then flashing yellow 3 times and back to red. Changes according to int timer.
  
*/
int timer = 2000; // two second timer
int red = 10;
int yellow = 11;
int green = 13;

void setup() {
	pinMode(red, OUTPUT);
	pinMode(yellow, OUTPUT);
	pinMode(green, OUTPUT);

	digitalWrite(red, HIGH);
	digitalWrite(yellow, LOW);
	digitalWrite(green, LOW);

}

void loop() {
	
	delay(timer);
	

	digitalWrite(red, LOW);
	digitalWrite(yellow, LOW);
	digitalWrite(green, HIGH); // green on

	delay(timer);

	digitalWrite(red, LOW);
	digitalWrite(yellow, HIGH); // solid yellow on
	digitalWrite(green, LOW);

	delay(timer);

	// loop that toggles yellow light on and off
	for(int i=0; i< 3; i++){
		digitalWrite(yellow, LOW);
		delay(500);
		digitalWrite(yellow, HIGH);
		delay(500);
	}

	digitalWrite(red, HIGH); // red on
	digitalWrite(yellow, LOW);
	digitalWrite(green, LOW);
}
