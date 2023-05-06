int redPin = 9;
int greenPin = 11;
int bluePin = 10;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void	light_color(int red, int green, int blue)
{
	analogWrite(redPin, red);
	analogWrite(greenPin, green);
	analogWrite(bluePin, blue);
}

void loop() {
  // red
  light_color(255, 0, 0);
  delay(1000);

  // green
  light_color(0, 255, 0);
  delay(1000);
  
  // blue
  light_color(0, 0, 255);
  delay(1000);
}
