#include <iostream>

using namespace std;

int Add(int a, int b)
{
	return a + b;
}

int main()
{
	int a = 10;
	int b = 20;
	cout << a << " + " << b << " = " << Add(a, b) << endl;
	cout << "Hello World!" << endl;
	return 0;
}
