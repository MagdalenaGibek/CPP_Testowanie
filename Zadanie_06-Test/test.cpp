#include "pch.h"
#include "../Zadanie_06/FizzBuzz.hpp"

TEST(FizzBuzzTest, TestRegularIntigers) {
	FizzBuzz f;
	EXPECT_EQ(f.convertToString(2), "2");
}

TEST(FizzBuzzTest, TestMultiplyOf3) {
	FizzBuzz f;
	EXPECT_EQ(f.convertToString(9), "Fizz");
}

TEST(FizzBuzzTest, TestMultiplyof5) {
	FizzBuzz f;
	EXPECT_EQ(f.convertToString(25), "Buzz");
}

TEST(FizzBuzzTest, TestMultiplyof3and5) {
	FizzBuzz f;
	EXPECT_EQ(f.convertToString(15), "FizzBuzz");
}
