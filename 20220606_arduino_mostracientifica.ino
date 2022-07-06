/*
 * 20220606 Arduino Mostra Científica
 * Llicenciat sota la llicència MIT.
 * 
 * Aquest programa fa girar el motor de passos 28BYJ-48.
 */

//libraries
#include <Stepper.h>

//variables
#define steps 2048
#define cw -1 //Clockwise (CW)
#define ccw 1 //AntiClockwise or Counterclockwise (CCW)
#define rpm 4 //default established rpm

//start the motor
/*
 * create an instance of the stepper class, specifying the number
 * of steps the motor has (steps variable) and the pins it's attached to
 */
Stepper stepper(steps, 8, 10, 9, 11); //don't order pins

//setup function that starts the motor with a determined rpm
void setup() {
  stepper.setSpeed(rpm);
}
//loop function that, in this case, allows to determining whether the motor should rotate clockwise or counterclockwise
void loop() {
  stepper.step(cw); //1 rpm is enough since it's running inside an infinite loop
  /*
   * for a determinated number of steps, delete or comment the code inside the loop function and add to the setup function the code: stepper.step(number_of_steps)  
   */
}

//15 rpm maximum for good performance and no struggling of the motor
//16 rpm and 17 rpm are also OK, but caution
//18 rpm struggles a lot and in 19 rpm the motor doesn't run
