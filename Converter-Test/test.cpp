
#include "pch.h"
#include "../Zadanie_05/ConverterClass.h"

TEST(UnitConverterTemperature, CelciusToFarehneit_ConvertZero) {
	UnitConverter converter;

	EXPECT_DOUBLE_EQ(converter.celciusToFarenheit(0), 32);
}

TEST(UnitConverterTemperature, CelciusToFarehneit_ConvertPositiveValue) {
	UnitConverter converter;

	EXPECT_DOUBLE_EQ(converter.celciusToFarenheit(40), 104);
}

TEST(UnitConverterTemperature, CelciusToFarehneit_ConvertNegativeValue) {
	UnitConverter converter;

	EXPECT_DOUBLE_EQ(converter.celciusToFarenheit(-15), 5);
}

TEST(UnitConverterTemperature, CelciusToFarehneit_ConvertFractionValue) {
	UnitConverter converter;

	EXPECT_DOUBLE_EQ(converter.celciusToFarenheit(37.6), 99.68);
	EXPECT_DOUBLE_EQ(converter.celciusToFarenheit(-10.5), 13.1);
}