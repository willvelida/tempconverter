#include <iostream>
#include "TempConverters.h"
#include "UserInput.h"

int main()
{
	double tempf, tempc;
	char userInput;

	std::cout << "Welcome to TempConverter!\n";
	userInput = askForInput();

	while (userInput != 'C' || userInput != 'c' || userInput != 'F' || userInput != 'f')
	{
		if (userInput == 'C' || userInput == 'c')
		{
			std::cout << "Please enter the current temperature in Celsius: ";
			std::cin >> tempc;

			tempf = calculateTempInFahrenheit(tempc);
			printTempInFahrenheit(tempf);
			break;
		}
		else if (userInput == 'F' || userInput == 'f')
		{
			std::cout << "Please enter the current temperature in Fahrenheit: ";
			std::cin >> tempf;

			tempc = calculateTempInCelsius(tempf);
			printTempInCelsius(tempc);
			break;
		}
		else
		{
			std::cout << "Input not recognised. Try again.\n";
			userInput = askForInput();
		}
	}

	return 0;
}