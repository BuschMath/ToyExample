#include <iostream>

// Function prototype
void printHelloWorld();

int main()
{
	std::cout << "In main()" << std::endl;
	// Function call
	printHelloWorld();

	return 0;
}

// Function definition
void printHelloWorld()
{
	std::cout << "Hello World!" << std::endl;
}