#pragma once
#include<string>

class FizzBuzz
{
public:
	std::string convertToString(int value)
	{
		if (value % 5 == 0 && value % 3 == 0) // ten warunek musi być zawsze pierwszy, taka trudność
		{
		return "FizzBuzz";
		}
		else if (value % 3 == 0)
		{
			return "Fizz";
		}
		else if (value % 5 == 0) 
		{
			return "Buzz";
		}
		else
		{
			return std::to_string(value);
		}
	
	}
};