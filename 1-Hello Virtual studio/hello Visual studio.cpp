#include <iostream>

int main()
{
	// welcome the user to the application
	std::cout << "Welcome to the adventure.\n";

	// declare all variables
	int first, second, third, result;

	// read variables from the user
	std::cout << "enter your first number please.\n", "the first number.\n";
	std::cin >> first;

	std::cout << "and the second number.\n";
	std::cin >> second;

	std::cout << "and finally the third number.\n";
	std::cin >> third;
	// make math calculation
	result = first + second - third;

	// print the result to the user
	std::cout << "and your result is " << result << ".\n";
	std::cout << "thanks for using the app.\n";
}