// the number of the pushbutton pin
int buttonPin = 5;

void setup() {
  
  // Initialize the button pin as an input
  pinMode(buttonPin, INPUT); 
  
  // Open the serial port at 9600 baud
  Serial.begin(9600);
}

void loop() {
  int buttonState = digitalRead(buttonPin);
  
  // serial log buttonState
  Serial.println(buttonState);
  
}