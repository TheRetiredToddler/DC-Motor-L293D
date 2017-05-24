#include "Motor.h"
#include "Arduino.h"

Motor::Motor(int pin1, int pin2)
{
    this->pin1 = pin1;
    this->pin2 = pin2;

    pinMode(this->pin1, OUTPUT);
    pinMode(this->pin2, OUTPUT);
}

void Motor::clockwise()
{
    digitalWrite(pin1, LOW);
    digitalWrite(pin2, HIGH);
}

void Motor::counter()
{
    digitalWrite(pin1, HIGH);
    digitalWrite(pin2, LOW);
}

int Motor::clockwiseSpeed(int speed)
{
	digitalWrite(pin1, LOW);
    analogWrite(pin2, speed);
	
	return speed;
}

int Motor::counterSpeed(int speed)
{
	analogWrite(pin1, speed);
    digitalWrite(pin2, LOW);
	
	return speed;
}