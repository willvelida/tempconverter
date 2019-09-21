#include <iostream>

double calculateTempInFahrenheit(double tempc)
{
	double tempf = (tempc * 1.8) + 32;

	return tempf;
}

double calculateTempInCelsius(double tempf)
{
	double tempc = (tempf - 32) * 0.5556;

	return tempc;
}

void printTempInFahrenheit(double tempf)
{
	std::cout << "The current temperature is " << tempf << " Fahrenheit.\n";
}

void printTempInCelsius(double tempc)
{
	std::cout << "The current temperature is " << tempc << " Celsius.\n";
}