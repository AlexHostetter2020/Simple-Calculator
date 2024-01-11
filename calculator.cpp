#include <iostream>

// Function definitions
static int getUserInput()
{
	std::cout << "Enter an integer   --> ";
	int input{};
	std::cin >> input;

	return input;
}

static char getMathOperation()
{
	std::cout << "Enter an operation --> ";
	char operation{};
	std::cin >> operation;

	return operation;
}

static double calculateResult(int value_1, char operation, int value_2)
{
	if (operation == '+') { return value_1 + value_2; }
	if (operation == '-') { return value_1 - value_2; }
	if (operation == '*') { return value_1 * value_2; }
	if (operation == '/') { return double(value_1) / value_2; }
	if (operation == '%') { return value_1 % value_2; }
}

static void printResult(double result)
{
	std::cout << "Output: " << result;
}

int main()
{
	// Prompt header
	std::cout << "******** SIMPLE CALCULATOR ********\n\n";
	std::cout << "TYPE 'q' TO QUIT.\n\n";
	while (std::cin)
	{
		// Get first number from user.
		int value_1{ getUserInput() };
		std::cout << '\n';

		// Get math operation from user.
		char operation{ getMathOperation() };

		// Break out the loop if user types 'q'.
		if (operation == 'q') { break; }
		std::cout << '\n';

		// Get second number from user.
		int value_2{ getUserInput() };
		std::cout << '\n';

		// Calculate result.
		double result{ calculateResult(value_1, operation, value_2) };

		// Print result.
		printResult(result);
		std::cout << '\n';
		std::cout << "-----------------------------------\n\n";
	}

	return 0;
}
