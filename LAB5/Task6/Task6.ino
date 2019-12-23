int ledOne = 13,
ledTwo = 12,
ledThree = 11,
ledFour = 10;
int knopka=A2;

#define ON LOW
#define OFF HIGH 
void setup() {
  pinMode(ledOne, OUTPUT);
  pinMode(ledTwo, OUTPUT);
  pinMode(ledThree, OUTPUT);
  pinMode(ledFour, OUTPUT);
}

void loop() {
  if(digitalRead(knopka) == ON)
  {
     digitalWrite(ledOne, ON);
     digitalWrite(ledTwo, ON);
     digitalWrite(ledThree, OFF);
     digitalWrite(ledFour, OFF);
     delay(250);
     digitalWrite(ledOne, OFF);
     digitalWrite(ledTwo, ON);
     digitalWrite(ledThree, ON);
     digitalWrite(ledFour, OFF);
     delay(500);
     digitalWrite(ledOne, OFF);
     digitalWrite(ledTwo, OFF);
     digitalWrite(ledThree, ON);
     digitalWrite(ledFour, ON);
     delay(500);
     digitalWrite(ledOne, ON);
     digitalWrite(ledTwo, OFF);
     digitalWrite(ledThree, OFF);
     digitalWrite(ledFour, ON);
     delay(900);
  }
 else
 {
   digitalWrite(ledOne, ON);
   digitalWrite(ledTwo, OFF);
   digitalWrite(ledThree, OFF);
   digitalWrite(ledFour, ON);
   delay(900);
   digitalWrite(ledOne, OFF);
   digitalWrite(ledTwo, OFF);
   digitalWrite(ledThree, ON);
   digitalWrite(ledFour, ON);
   delay(500);
   digitalWrite(ledOne, OFF);
   digitalWrite(ledTwo, ON);
   digitalWrite(ledThree, ON);
   digitalWrite(ledFour, OFF);
   delay(500);
   digitalWrite(ledOne, ON);
   digitalWrite(ledTwo, ON);
   digitalWrite(ledThree, OFF);
   digitalWrite(ledFour, OFF);
   delay(250);
 }
}
