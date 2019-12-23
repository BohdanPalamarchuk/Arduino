int ledPin = 13;
char incomingData = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0)
  {
    incomingData = Serial.read();
  }
  switch (incomingData)
  {
    case '1': 
      digitalWrite(ledPin, LOW);
      delay(1);
      digitalWrite(ledPin, HIGH);
      delay(9);
      break;
    case '2': 
      digitalWrite(ledPin, LOW);
      delay(5);
      digitalWrite(ledPin, HIGH);
      delay(5);
      break;
    case '3': 
      digitalWrite(ledPin, LOW);
      delay(9);
      digitalWrite(ledPin, HIGH);
      delay(1);
      break;
    default: 
      Serial.println("There is no such brightness. Try 1, 2 or 3.");
  }   
}
