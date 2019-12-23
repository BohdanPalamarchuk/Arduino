int ledPin = 13;
int value = 0;
void setup()  {
  // устанваливаем пин 9 в режим выхода
 
}
 
void loop()  {   
     pinMode(ledPin, OUTPUT);
     delayMicroseconds(1); 
     pinMode(ledPin, INPUT);
     delayMicroseconds(9); 
     pinMode(ledPin, OUTPUT);
     delayMicroseconds(1);  
     pinMode(ledPin, INPUT);
     delayMicroseconds(9);        
}
 
