// Define the LED pin. Pin 13 is the built-in LED on most Arduino boards.
const int ledPin = 6; 

void setup() {
  // Initialize serial communication at 9600 baud
  Serial.begin(9600);
  
  // Configure the LED pin as an output
  pinMode(ledPin, OUTPUT);
  
  // Print instructions to the Serial Monitor
  Serial.println("Send '1' to turn the LED ON, or '0' to turn it OFF.");
}

void loop() {
  // Check if there is data available in the serial buffer
  if (Serial.available() > 0) {
    // Read the incoming character
    char incomingByte = Serial.read();
    
    // Check what character was received
    if (incomingByte == '1') {
      digitalWrite(ledPin, HIGH);  // Turn LED on
      Serial.println("LED is now ON");
    } 
    else if (incomingByte == '0') {
      digitalWrite(ledPin, LOW);   // Turn LED off
      Serial.println("LED is now OFF");
    }
  }
}
