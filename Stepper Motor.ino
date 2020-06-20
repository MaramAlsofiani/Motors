
#include <Stepper.h>
#define STEPS 2038 
Stepper stepper(STEPS, 8, 10, 9, 11);
void setup() {
  // nothing to do
}
void loop() {
  stepper.setSpeed(50); //means 50rpm
  stepper.step(2038); 
  delay(10); 
  stepper.setSpeed(20); //means 20rpm
  stepper.step(-2038); 
}
