#include "pch.h"
#include "../Zadanie_04_Pen/ClassPen.hpp"

TEST(TestPen, TestIfPointForwarded) {
	Pen p;
	p.forward(5);
	EXPECT_EQ(p.getY(), 5);
	EXPECT_EQ(p.getX(), 0);
}

TEST(TestPen, TestPointTurnLeft1Time) {
	Pen p;
	p.forward(3);
	p.turnLeft();
	p.forward(2);
	EXPECT_EQ(p.getY(), 3);
	EXPECT_EQ(p.getX(), -2);
}

TEST(TestPen, TestPointTurnLeft2Times) {
	Pen p;
	p.forward(3);
	p.turnLeft();
	p.forward(2);
	p.turnLeft();
	p.forward(2);
	EXPECT_EQ(p.getY(), 1);
	EXPECT_EQ(p.getX(), -2);
}

TEST(TestPen, TestPointTurnLeft3Times) {
	Pen p;
	p.forward(3);
	p.turnLeft();
	p.forward(2);
	p.turnLeft();
	p.forward(2);
	p.turnLeft();
	p.forward(3);
	EXPECT_EQ(p.getY(), 1);
	EXPECT_EQ(p.getX(), 1);
}

TEST(TestPen, TestPointTurnRight1Time) {
	Pen p;
	p.forward(5);
	p.turnRight();
	p.forward(3);
	EXPECT_EQ(p.getY(), 5);
	EXPECT_EQ(p.getX(), 3);
}

TEST(TestPen, TestPointTurnRight2Times) {
	Pen p;
	p.forward(5);
	p.turnRight();
	p.forward(3);
	p.turnRight();
	p.forward(6);
	EXPECT_EQ(p.getY(), -1);
	EXPECT_EQ(p.getX(), 3);
}

TEST(TestPen, TestPointTurnRight3Times) {
	Pen p;
	p.forward(5);
	p.turnRight();
	p.forward(3);
	p.turnRight();
	p.forward(6);
	p.turnRight();
	p.forward(4);
	EXPECT_EQ(p.getY(), -1);
	EXPECT_EQ(p.getX(), -1);
}

TEST(TestPen, TestXequal2) {
	Pen p;
	p.forward(5);
	EXPECT_EQ(p.getX(), 0);
}

TEST(TestPen, TestYequal1) {
	Pen p;
	p.forward(5);
	EXPECT_EQ(p.getY(), 5);
}