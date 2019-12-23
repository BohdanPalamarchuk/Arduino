int ledLight = 13;
int ledSound = 3;
int led = 9;

#define ON LOW
#define OFF HIGH

char incomingByte = 0;

void setup(){
  Serial.begin(9600);
  pinMode(led, INPUT);
  pinMode(ledLight, OUTPUT);
  pinMode(ledSound, OUTPUT);
}

void loop(){
  if(digitalRead(led) == OFF){
    //Serial.print("I received - ");
    digitalWrite(ledLight, OFF);     
    digitalWrite(ledSound, OFF);
    
  }
  else{
     digitalWrite(ledLight, ON);
     digitalWrite(ledSound, ON);
    delay(400);
     
    }
}
