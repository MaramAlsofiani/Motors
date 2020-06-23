const int m1= 12 ;

const int m2= 13; 

void setup() { 

pinMode(m1, OUTPUT); 
pinMode(m2, OUTPUT); 

}

void loop() { 

digitalWrite(m1,1); 

delay(4000); 

digitalWrite(m1, 0); 
  delay(1000); 

digitalWrite(m2, 1);

delay(4000); 

digitalWrite(m2, 0); 
  delay(1000); 

}
