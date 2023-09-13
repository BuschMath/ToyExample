#include <iostream>

// Function prototype
void printHelloWorld();

int main()
{
	std::cout << "In main()" << std::endl;
	// Function call
	printHelloWorld();

	float a = 0.1;

	int count = 0;
	while (count < 10)
	{
		a = a + 0.1;
		count++;
	}

	if (a == 1.0)
	{
		std::cout << "a is 1.0" << std::endl;
	}
	else
	{
		std::cout << "a is not 1.0" << std::endl;
	}

	std::cout << "Int division: " << (- 7) / 4 << std::endl;
	std::cout << "Float division: " << 7.0 / 4.0 << std::endl;
	std::cout << "Mod division: " << 7 % 4 << std::endl;

	unsigned int b = 2147483647;

	std::cout << "b: " << b + 2147483647 << std::endl;

	return 0;
}

// Function definition
void printHelloWorld()
{
	std::cout << "Hello World!" << std::endl;
}