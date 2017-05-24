#ifndef MOTOR_H
#define MOTOR_H

class Motor
{
    public:
        Motor(int pin1, int pin2);
        void clockwise();
        void counterClockwise();
		
		int clockwiseSpeed(int speed);
		int counterSpeed(int speed);
    protected:

    private:
};

#endif // MOTOR_H
