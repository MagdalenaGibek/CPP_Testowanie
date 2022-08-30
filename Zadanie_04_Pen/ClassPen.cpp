#include "ClassPen.hpp"

Pen::Pen()
	: posX(0), posY(0), orientationX(0), orientationY(1)
{
}

Pen::~Pen()
{
}

void Pen::forward(int distance)
{
	if (orientationX == 0 && orientationY > 0)
	{
		posY +=distance;
		posX += 0;
	}
	else if (orientationX > 0 && orientationY == 0)
	{
		posY += 0;
		posX += distance;
	}
	else if (orientationX == 0 && orientationY < 0)
	{
		posY -= distance;
		posX -= 0;
	}
	else
	{
		posY -= 0;
		posX -= distance;
	}
}

void Pen::turnLeft()
{
	if (orientationX == 0 && orientationY > 0)
	{
		orientationX = -1;
		orientationY = 0;
	}
	else if (orientationX < 0 && orientationY == 0)
	{
		orientationX = 0;
		orientationY = -1;
	}
	else if (orientationX == 0 && orientationY < 0)
	{
		orientationX = 1;
		orientationY = 0;
	}
	else
	{
		orientationX = 0;
		orientationY = 1;
	}
}

void Pen::turnRight()
{
	if (orientationX == 0 && orientationY > 0)
	{
		orientationX = 1;
		orientationY = 0;
	}
	else if (orientationX > 0 && orientationY == 0)
	{
		orientationX = 0;
		orientationY = -1;
	}
	else if (orientationX == 0 && orientationY < 0)
	{
		orientationX = -1;
		orientationY = 0;
	}
	else
	{
		orientationX = 0;
		orientationY = 1;
	}
}

int Pen::getX()
{
	return posX;
}

int Pen::getY()
{
	return posY;
}
