//more legitimate way to produce bottles

#include <iostream>
using namespace std;

struct bottles
{
	int amount;


	int setAmount(int b)
	{
		amount = b;
	}

	void singSong()
	{
		while(amount >= 1)
		{
			getAmountWall();
			getAmountState();
			passTheBottle();
			getAmountWall();
			cout << endl;
		}
	}

	void passTheBottle()
	{
		cout << "Take one down\n" << "And pass it around\n";
		amount -= 1;
	}

	void getAmountState()
		{
			if(amount > 1)
				cout << amount << " bottles of beer!\n";
			
			if(amount == 1)
				cout << amount << " bottle of beer!\n";
		}
	void getAmountWall()
	{
		if(amount > 1)
		{
			cout << amount << " bottles of beer on the wall!\n";
		}
		if(amount == 1)
		{
			cout << "1 bottle of beer on the wall!\n";
		}
		if(amount == 0)
		{
			cout << "No more bottles of beer on the wall!\n";
		}
	}

};

int main()
{
	bottles myBottles;
	myBottles.setAmount(999);
	myBottles.singSong();
}
