#include <iostream>

// Function prototype
float calculateVolume (float r, float h);

int main()
{
	std::cout << "The volume is: " << calculateVolume(2.0, 3.0) << std::endl;

	return 0;
}

float calculateVolume(float r, float h)
{
	return 3.14159 * r * r * h;
}
