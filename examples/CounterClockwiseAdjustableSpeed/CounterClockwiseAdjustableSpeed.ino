/* pins must be PWM pins if you want to set a certain speed & use
the clockwiseSpeed() & counterSpeed() functions

On L293D:
  - Power/vcc on motor -> Output 3 on l293d (pin 3)
  - Ground on motor -> Output 6 on l293d (pin 6) */
  
#include <Motor.h>
  
Motor motor(5, 6);

void setup()
{
  
}

void loop()
{
  motor.counterSpeed(100);  // Number from 1 - 255
}