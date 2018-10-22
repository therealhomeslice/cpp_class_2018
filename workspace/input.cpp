//input.cpp

#include <iostream>

using namespace std;

int add(int , int);


int main()
{
	int x, y;
	cout << "Enter a value:" << endl;
	cin >> x;
	cout << "Value entered: " << x << endl;

	cout << "Enter 2nd Value" << endl;
	cin >> y;

	cout << "Sum: " << add(x,y) << endl;

	return 0;
}

int add(int x, int y)
{
	return x + y;
}
