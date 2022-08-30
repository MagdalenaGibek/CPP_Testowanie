#include "pch.h" // domyślnie jest pch.h
#include "../Basic/Calculator.hpp" //".." wychodzę z projektu testowego i załączam docelowy

TEST(AddTest, Test2Plus2Equals4)
{
	Calculator calc; //TDD given

	EXPECT_EQ(calc.add(2, 2), 4);
}

//TEST(TestCase1, Test1) //makro definiujące test o nazwie test case o nazwie TestCase1
//// test case nie musi być unikalny, test musi być unikalny)
//{
//	// poniżej są asercje
//  EXPECT_EQ(1, 1); // wymiennie ASSERT zamiast  EXPECT - ten test sprawdza równość
//  //Assert fail - anulujemy wykonywanie dalszej częsci w teście, krytyczne warunki, nieudany test (np. wskaźnik robi się nullptr) i nie ma sensu kontyuować pozostałych testów
//  //Expect fail - wykona test do końca, wszędzie indziej, zwraca więcej informacji bo kontynuuje test, domyślnie zaleca się używanie tego
//
//  EXPECT_TRUE(true); // sprawdza poprawność wyrażenia w nawiasach
//}
//TEST(TestCase1, Test2) 
//{
//	EXPECT_EQ(1, 1);
//	EXPECT_TRUE(false);
//}
//TEST(TestCase1, Test3) 
//{
//	EXPECT_EQ(1, 2); // sprawdzamy czy 1 jest równe 2, oczywiście to błąd
//	EXPECT_TRUE(true);
//}
//TEST(TestCase2, Test1) 
//{
//	EXPECT_EQ(1, 1);
//	EXPECT_TRUE(true);
//}