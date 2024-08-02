#include <AFMotor.h>

// AF_DCMotor motor1(1); // Create a motor object for motor 1
AF_DCMotor motor(1, MOTOR12_64KHZ);
void setup() {
  // Set the motor speed (optional)
  motor.setSpeed(255); // Set speed to 150 (out of 255)
}

void loop() {
  // Control the motor
  motor.run(FORWARD); // Run motor forward
  //  delay(2000); // Wait for 2 seconds
  motor.run(BACKWARD); // Run motor backward
  // delay(2000); // Wait for 2 seconds
  motor.run(RELEASE); // Stop the motor
  // delay(2000); // Wait for 2 seconds
}
