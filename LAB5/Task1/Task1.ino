int ledPin = 13;
int inPin = A2;
boolean val = 0;

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(inPin, INPUT);
}

void loop()
{
  val = digitalRead(inPin);
  digitalWrite(ledPin, val);
}
