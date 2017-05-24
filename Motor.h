#ifndef MOTOR_H
#define MOTOR_H

class Motor
{
    public:
		int pin1;
		int pin2;
		
        Motor(int pin1, int pin2);
		
        void clockwise();
        void counter();
		int clockwiseSpeed(int speed);
		int counterSpeed(int speed);

    protected:

    private:
};

#endif // MOTOR_H
