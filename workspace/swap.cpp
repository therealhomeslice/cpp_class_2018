#include <iostream>

void swap(int & a, int & b);

int main()
{
	int x = 25, y = 30;
	swap(x,y);

}

void swap(int & a, int & b)
{
	int t;
	t = a;
	a = b;
	b = t;
}
