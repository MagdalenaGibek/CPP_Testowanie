#pragma once

class Pen
{
public:
	Pen();
	virtual ~Pen();
    void forward(int distance);
    void turnLeft();
    void turnRight();
    int getX();
    int getY();

protected:
    int posX;
    int posY;
    int orientationX;
    int orientationY;
};