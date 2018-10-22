#include <iostream>

void square(int & first, int & second);

int main()
{
	using namespace std;
	int val1, val2;

	cout << "First Val: " << endl;
	cin >> val1;
	cout << "Second Val: " << endl;
	cin >> val2;

	square(val1, val2);
	cout << "Square 1: " << val1 << "\n" << "Square 2: " << val2 << endl;
}

void square(int & first, int & second)
{
	first = first*first;
	second = second*second;
}
