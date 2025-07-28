
const int buttonPin = 2;     // the number of the pushbutton pin
const int ledPin =  13;      // the number of the LED pin

int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == LOW) {
    analogWrite(3, 150);
    analogWrite(5,0);
     analogWrite(6, 0);
    analogWrite(9,0);
  } else {
        analogWrite(3, 0);
    analogWrite(5,0);
     analogWrite(6, 150);
    analogWrite(9,0);
  }
}
