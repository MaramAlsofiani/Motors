#include <Servo.h>
const int button1 = 5;
const int button2 = 6;
int buttonState = 0;
int buttonState2 = 0;

Servo servoA;

int position = 0;
int position1= 0;

void setup() {
servoA.attach(3);

pinMode(button1, INPUT);
pinMode(button2,INPUT);
}

void loop() {
buttonState = digitalRead(button1);
buttonState2 = digitalRead(button2);

if(buttonState ==LOW && position < 180){
servoA.write(position++);
}

if(buttonState == HIGH && position == 0){
servoA.write(position--);
}

if(buttonState2 ==LOW && position1 < 90){
servoA.write(position1++);
}

if(buttonState2 == HIGH && position1 == 0){
servoA.write(position1--);
}

}
