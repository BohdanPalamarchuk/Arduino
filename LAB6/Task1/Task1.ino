#define DHT_PORT PORTC
#define DHT_DDR DDRC
#define DHT_PIN PINC
#define DHT_BIT 6
#define dataPin 5
uint8_t humidity, temperature; /*значение влажности и температуры*/ 
uint8_t dht_read(); 
 
void setup() { 
  Serial.begin(9600); 
  pinMode(LED_BUILTIN, OUTPUT); 
} 
 
// the loop function runs over and over again forever 
void loop() { 
  digitalWrite(LED_BUILTIN, LOW);   /*выключим светодиод*/ 
  delay(500); 
  dht_read(); 
  digitalWrite(LED_BUILTIN, HIGH);  /*включим светодиод, когда данные будут готовы*/ 
  delay(500); 
  /*вывод результата в монитор*/ 
  Serial.print(humidity); 
  Serial.println(" %"); 
  Serial.print(temperature); 
  Serial.println(" *C"); 
} 
 

uint8_t dht_read() { 
  uint8_t datadht[5]; 
   
  
  //DHT_DDR |= (1 << DHT_BIT); 
  pinMode(dataPin, OUTPUT);
  //DHT_PORT &= ~(1 << DHT_BIT);
  digitalWrite(dataPin, LOW);
  _delay_ms (18);
  //delay(18);
  //cli(); 
  //DHT_PORT |= (1 << DHT_BIT); 
  digitalWrite(dataPin, HIGH);
  _delay_us (40); 
  //delay(40);
   

  //DHT_DDR &= ~(1 << DHT_BIT); 
  pinMode(dataPin, INPUT);
  _delay_us(10);
  //delay(10);
  //if (DHT_PIN & (1 << DHT_BIT)) { return -1; } 
  if (digitalRead(dataPin)==HIGH) { return -1; } 
  _delay_us(80); 
  //delay(80);
  //if (!(DHT_PIN & (1 << DHT_BIT))) { return -1; } 
  if (digitalRead(dataPin)==LOW) { return -1; }
   
  
 // while (DHT_PIN & (1 << DHT_BIT)); 
  while (digitalRead(dataPin)==HIGH); 
  for (uint8_t j = 0; j < 5; j++) { 
    datadht[j] = 0; 
    for (uint8_t i = 0; i < 8; i++) {  
       
      //while (!(DHT_PIN & (1 << DHT_BIT)));  
      while (digitalRead(dataPin)==LOW);
      _delay_us(30);  
      //delay(30);
      //if (DHT_PIN & (1 << DHT_BIT))
      if(digitalRead(dataPin)==HIGH)
        datadht[j] |= 1 << (7 - i); 
      //while (DHT_PIN & (1 << DHT_BIT)); 
      while (digitalRead(dataPin)==HIGH); 
       
    } 
  } 
  sei(); 
  _delay_us(50); 
  //delay(50);
 
  uint8_t sum = datadht[0] + datadht[1] + datadht[2] + datadht[3]; 
  if (datadht[4] != sum) return -1; 
    
  humidity = datadht[0];  
  temperature = datadht[2];  
   
  return 0; 
} 
