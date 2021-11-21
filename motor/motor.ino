#include <AccelStepper.h>
// Motor pin definitions:
#define motorPin1  8      // IN1 on the ULN2003 driver
#define motorPin2  9      // IN2 on the ULN2003 driver
#define motorPin3  10     // IN3 on the ULN2003 driver
#define motorPin4  11     // IN4 on the ULN2003 driver
// Define the AccelStepper interface type; 4 wire motor in half step mode:
#define MotorInterfaceType 8
// Initialize with pin sequence IN1-IN3-IN2-IN4 for using the AccelStepper library with 28BYJ-48 stepper motor:
AccelStepper stepper = AccelStepper(MotorInterfaceType, motorPin1, motorPin3, motorPin2, motorPin4);
void setup() {
  // Set the maximum steps per second:
  stepper.setMaxSpeed(2000);
  // Set the maximum acceleration in steps per second^2:
  stepper.setAcceleration(500);
}
void loop() {
  // Set target position:
  stepper.moveTo(65536);
  // Run to position with set speed and acceleration:
  stepper.runToPosition();
  
  delay(1000);
  
}
