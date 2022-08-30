#pragma once

#include <cmath>

//Napisz i przetestuje klasę Triangle, która w c - torze przyjmuje 3 boki
//- dodaj metode getArea, która wyliczy pole
//pole wylicz za pomocą wzoru Herona : https://www.mathopenref.com/heronsformula.html
//-dodaj metodę getPerimeter, która wyliczy obwód
//- dodaj metodę isValid, która zwróci prawdę jeżeli trójąkt jest poprwany
//Trójkąt jest porpwany, gdy suma długości dwóch boków trójkąta jest zawsze większa od długości trzeciego boku
//- jeżeli trójkąt nie moze istnieć to niech wszystkie funkcje coś wyliczające zwracają 0

class Triangle
{
public:
	Triangle(double side1, double side2, double side3)
		: a(side1), b(side2), c(side3)
	{
	}

	double getPerimeter() const
	{
		double perimeter = 0;

		if (isValid())
		{
			perimeter = a + b + c;
		}

		return perimeter;
	}

	double getArea() const
	{
		double area = 0;

		if (isValid())
		{
			double p = getPerimeter() / 2;
			area = sqrt(p * (p - a) * (p - b) * (p - c));
		}

		return area;
	}

	bool isValid() const
	{
		return (((a + b) > c) && ((b + c) > a) && ((a + c) > b));
	}

private:
	double a, b, c;
};