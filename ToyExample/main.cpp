#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	cout << "a: " << 'a' << endl << "a: " << int('a') << endl;
	cout << "a-32: " << 'a' - 32 << endl;
	cout << "a+b-90: " << char('a' + 'b' - 90) << endl;

	return 0;
}