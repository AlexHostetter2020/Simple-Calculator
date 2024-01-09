/********************************************************************************/

// Include Statements.
#include <iostream>		// Input and output
#include <cmath>		// Unary math operations (!, Sin, etc.)

/********************************************************************************/

// Functions to decrease redundancy/perform more complex computations.

// Factorial function using recursion. Example: 3! = 3 * 2 * 1 = 6
long long int factorial(long long int n)
{
	// Base case.
	if (n == 0) { return 1; }

	// Recursion.
	else { return n * factorial(n - 1); }
}

/********************************************************************************/

/*	Calculator App
*	Defined Operations:
*	
*	Add, Subtract, Divide, Multiply, Factorial, Modulus.
*/
int main()
{
	// Stores the user's running total for the computation.
	double userNumber = 0;

	// Simple prompt explaining the valid operations to the user.
	std::cout << "****** Hello! This is a simple calculator app. ******" << '\n';
	std::cout << "\n";
	std::cout << "Supported operations include: {ADD, SUBTRACT, DIVIDE, MULTIPLY";
	std::cout << ", MODULUS}\n\n" << "Type 'q' to quit.\n\n";


	// ADD IF STATEMENT FOR UNIARY AND BINARY OPERATIONS FOR USER TO SELECT.

	while (std::cin)
	{
		// Terminal Prompt.
		std::cout << "--> ";

		// Store the user's input in memory.
		double first_Input;
		char operation;
		double second_Input;

		std::cin >> first_Input >> operation >> second_Input;

		// Exit command.
		if (operation == 'q') { break; }

		// Operations
		if (operation == '+') { std::cout << first_Input + second_Input << '\n'; }

		if (operation == '-') { std::cout << first_Input - second_Input << '\n'; }

		if (operation == '*') { std::cout << first_Input * second_Input << '\n'; }

		if (operation == '/') { std::cout << first_Input / second_Input << '\n'; }
		
		if (operation == '%')
		{
			std::cout << int(first_Input) % int(second_Input) << '\n';
		}
	}

	// DONE.
	return EXIT_SUCCESS;
}

/********************************************************************************/
