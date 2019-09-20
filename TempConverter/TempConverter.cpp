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

char askForInput()
{
	char userInput;

	std::cout << "Please enter C for Celsius or F for Fahrenheit\n";
	std::cin >> userInput;

	return userInput;
}

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