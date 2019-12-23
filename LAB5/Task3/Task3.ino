int led = 13;
#define ON LOW
#define OFF HIGH 
void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
 digitalWrite(led, OFF);
 delay(500);
 digitalWrite(led, ON);
 delay(500);
 digitalWrite(led, OFF);
 delay(500);
 digitalWrite(led, ON);
 delay(500);
 digitalWrite(led, OFF);
 delay(500);
 digitalWrite(led, ON);
 delay(500);
 digitalWrite(led, OFF);
 delay(1000);
 digitalWrite(led, ON);
 delay(1000);
 digitalWrite(led, OFF);
 delay(1000);
 digitalWrite(led, ON);
 delay(1000);
 digitalWrite(led, OFF);
 delay(1000);
 digitalWrite(led, ON);
 delay(1000);
 digitalWrite(led, OFF);
 delay(1000);
 digitalWrite(led, ON);
 delay(500);
 digitalWrite(led, OFF);
 delay(500);
 digitalWrite(led, ON);
 delay(500);
 digitalWrite(led, OFF);
 delay(500);
 digitalWrite(led, ON);
 delay(500);
 digitalWrite(led, OFF);
 delay(4000);
}
