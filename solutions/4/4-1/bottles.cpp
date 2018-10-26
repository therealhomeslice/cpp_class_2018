#include <iostream>

using namespace std;
int main()
{
	int x = 99;

	for(x; x > 0; x--)
	{

		if(x > 1)
		cout << x << " bottles of beer on the wall!\n" << x <<" bottles of beer!\n" << "Take one down\n" << "And pass it around\n" << x-1 << " bottles of beer on the wall!\n" << endl;
		else
			cout << x << " bottle of beer on the wall!\n" << x << " bottle of beer!\n" << "Take one down\n" << "And pass it around\n" << "No more bottles of beer on the wall!\n";
	}
}
