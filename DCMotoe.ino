int output;
int pin = 9;

void setup(){
  Serial.begin(9600);
}

void loop()
{
  output = map(analogRead(A0), 0, 1023, 0, 255);
  Serial.println(output);
  analogWrite(pin, output);
  delay(1000);
}
