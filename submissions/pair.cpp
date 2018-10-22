#include <iostream>
#include <string>

using namespace std;


struct Pair
{
	string first;
	string second;
	bool samesies;
	void setFirst(string a)
	{
		first = a;
	}
	void setSecond(string b)
	{
		second = b;
	}
	void print()
	{
		cout << "First Word: " << first << endl;
		cout << "Second Word: " << second << endl;
		cout << "Bool: " << samesies << endl;
	}
	bool areTheSame()
	{
		samesies = first == second;
	}
	string getFirst()
	{
		return first;
	}
	string getSecond()
	{
		return second;
	}
};
int main(int argc, char* argv[])
{
	Pair *pp = new Pair;
	pp -> setFirst(argv[1]);
	pp -> setSecond(argv[2]);
	pp -> areTheSame();
	pp -> print();

}
