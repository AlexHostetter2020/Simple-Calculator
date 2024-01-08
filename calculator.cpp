/********************************************************************************/

// Include Statements.
#include <iostream>

/********************************************************************************/

// Functions to decrease redundancy/perform more complex computations.

double getValueFromUser()
{
	std::cout << "Please enter a number: ";
	double input{};
	std::cin >> input;

	return input;
}

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
	std::cout << ", FACTORIAL, MODULUS}\n";

	
	// DONE.
	return 0;
}

/********************************************************************************/