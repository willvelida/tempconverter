#include <iostream>

char askForInput()
{
	char userInput;

	std::cout << "Please enter C for Celsius or F for Fahrenheit\n";
	std::cin >> userInput;

	return userInput;
}