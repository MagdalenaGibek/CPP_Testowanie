#include "pch.h" //wszystko do poprawy
#include<queue>

//1. Sprawdzic czy nowo utworzona kolejka jest pusta - done
// 
//2. Sprawdzic czy jak dodamy kilka elementów (push) to size sie zmieni na prawidlowa wartosc 
//3. Sprawdzic czy jak wywołamy pop na kolejce z elemntami to zmniejszy sie jej rozmiar
//4. Sprawdzic czy jak za pomoca push włożyły elementy o zadanych wartosciach to po wywołaniu pop odpowiednio będzie ustawiony front
//5. Sprawdzic czy jak wrzucimy 5 elementów i potem 5 razy wywołamy pop to kolejka bedzie pusta. (polecam uzyc petli for)
//5*. Swap


TEST(QueueTest, TestNewQueueIsEmpty) 
{
	std::queue<int> testedQueue;
  EXPECT_TRUE(testedQueue.empty());
}

TEST(QueueTest, TestSizeOfQueue)
{
	std::queue<int> testedQueue;
	// mogę to zrobić w pętli
	testedQueue.push(1);
	testedQueue.push(2);
	testedQueue.push(3);
	EXPECT_EQ(testedQueue.size(), 3);
}

TEST(QueueTest, TestIfPopWorks)
{
	std::queue<int> testedQueue;
	testedQueue.push(1);
	testedQueue.push(2);
	testedQueue.push(3);
	testedQueue.pop();
	EXPECT_EQ(testedQueue.size(), 2);
}

TEST(QueueTest, TestFrontValue)
{
	std::queue<int> testedQueue;
	testedQueue.push(1);
	testedQueue.push(2);
	testedQueue.push(3);
	testedQueue.pop();
	EXPECT_EQ(testedQueue.front(), 2);
}

TEST(QueueTest, TestPushAndPop)
{
	std::queue<int> testedQueue;
	for (size_t i = 0; i < 5; ++i)
	{
		testedQueue.push(i);
	}
	for (size_t i = 0; i < 5; ++i)
	{
		testedQueue.pop();
	}
	EXPECT_TRUE(testedQueue.empty());
}