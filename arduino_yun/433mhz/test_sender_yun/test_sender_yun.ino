void setup() {
  
  pinMode(7, OUTPUT);
  pinMode(13, OUTPUT);
  
}


void loop() {
  
  for (int i=0; i<1000; i++) {
  
  digitalWrite(7, HIGH);
  digitalWrite(13, HIGH);
  delayMicroseconds(1000);
  
  digitalWrite(7, LOW);
  digitalWrite(13, LOW);
  delayMicroseconds(1000);
  
  }
  
 for (int i=0; i<1000; i++) {
  
  digitalWrite(7, LOW);
  digitalWrite(13, LOW);
  delayMicroseconds(1000);
  
  digitalWrite(7, LOW);
  digitalWrite(13, LOW);
  delayMicroseconds(1000);
  
  }
  
  
}
