#define motorSteps 400 // change this depending on the number of steps
// per revolution of your motor
#define motorPin1 8
#define motorPin2 9
#define ledPin 13
#include <Stepper.h>
// initialize of the Stepper library:
Stepper myStepper(motorSteps, motorPin1,motorPin2);

void setup() {
// set the motor speed at 60 RPMS:
myStepper.setSpeed(120);

// Initialize the Serial port:
Serial.begin(9600);

// set up the LED pin:
pinMode(ledPin, OUTPUT);
// blink the LED:
}

void loop() {
// Step forward 100 steps:
for (int i=0; i<4; i++) {

Serial.println("Forward");
myStepper.step(1600);
delay(250);
}
// Step backward 100 steps:
for (int i=0; i<2; i++){
Serial.println("Backward");
myStepper.step(-1600);
delay(250);
}
}
