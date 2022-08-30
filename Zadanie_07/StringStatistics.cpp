#include "StringStatistics.h"
#include <string>
#include <algorithm>

StringStatictics::StringStatictics(std::string str)
	: _str(str)
{
}

int StringStatictics::lettersNum()
{
	//int count = 0;
	//for (auto it = _str.begin(); it != _str.end(); ++it)
	//{
	//	if (isLetter(*it))
	//	{
	//		++count;
	//	}
	//}
	return std::count_if(_str.begin(), _str.end(), isLetter);
}

int StringStatictics::figuresNum()
{
	return std::count_if(_str.begin(), _str.end(), isDigit);
}

int StringStatictics::specialCharatcersNum()
{
	return std::count_if(_str.begin(), _str.end(), isSpecial);;
}

bool StringStatictics::isBetween(char c, char lower, char higher)
{
	return (c >= lower && c <= higher);
}

bool StringStatictics::isDigit(char c)
{
	/*return (c >= 48 && c<=57);*/
	return isBetween(c, 48, 57);
}

bool StringStatictics::isLetter(char c)
{
	/*return (c>=65 && c<=90) || (c >= 97 && c <= 122);*/
	return isBetween(c, 65, 90) || isBetween(c, 97, 122);
}

bool StringStatictics::isSpecial(char c)
{
	return !isDigit(c) && !isLetter(c);
}
