const int buttonPin = 2;     // the number of the pushbutton pin
const int ledPin = 11;       // the number of the LED pin

void setup() {
  // Initialize the LED pin as an output
  pinMode(ledPin, OUTPUT);
  
  // Initialize the button pin as an input
  // (The physical resistor in your circuit acts as a pull-up)
  pinMode(buttonPin, INPUT); 
}

void loop() {
  // Read the state of the pushbutton
  int buttonState = digitalRead(buttonPin);

  // Because of the pull-up resistor configuration, 
  // the pin reads LOW when the button is actively pressed.
  if (buttonState == LOW) {
    digitalWrite(ledPin, HIGH);  // Turn the LED on
  } else {
    digitalWrite(ledPin, LOW);   // Turn the LED off
  }
}