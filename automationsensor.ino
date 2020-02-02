const int ledPin = 13;
const int ldrPin = A0;
#define RELAY1  6                        
#define RELAY2  7                        
void setup() {
  pinMode(RELAY1, OUTPUT);       
  pinMode(RELAY2, OUTPUT);
Serial.begin(9600);
pinMode(ledPin, OUTPUT);
pinMode(ldrPin, INPUT);
}
void loop() { 
  int ldrStatus = analogRead(ldrPin);
 if (ldrStatus >=550) {
 digitalWrite(RELAY1,LOW);
 digitalWrite(RELAY2,HIGH);           
 digitalWrite(ledPin, HIGH);
  Serial.print(ldrStatus);
Serial.println("LDR is Light, LED is ON");
}
else {
  digitalWrite(RELAY1,HIGH); 
  digitalWrite(RELAY2,LOW);
digitalWrite(ledPin, LOW);
Serial.print(ldrStatus);
Serial.println("?");
}
}
