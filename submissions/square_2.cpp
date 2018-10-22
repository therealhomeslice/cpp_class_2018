#include <iostream>

void square(double & first, double & second);

int main()
{
	using namespace std;
	double val1, val2;

	cout << "First Val: " << endl;
	cin >> val1;
	cout << "Second Val: " << endl;
	cin >> val2;

	square(val1, val2);
	cout << "Square 1: " << val1 << "\n" << "Square 2: " << val2 << endl;
}

void square(double & first, double & second)
{
	first = first*first;
	second = second*second;
}
