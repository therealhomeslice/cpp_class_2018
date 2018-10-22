//
//	Starter code for Exercise 3-3
//
#include <iostream>

using namespace std;

struct Fraction 
{
	int numer;
	int denom;
	
	void print( )
	{
		cout << numer  << "/"  << denom;
	}
	
	void recip( ) 
	{
		int temp = numer;
		numer = denom;
		denom = temp;
	}
	void initialize(int n = 0, int d = 0)
	{
		numer = n;
		denom = d;
	}
	void add(int numer, int denom)
	{
		int result = numer * denom;
	}
	void divide(int numer, int denom)
	{
		double result = numer/denom;
	}
	Fraction mult(const Fraction & p)
	{
		Fraction temp;
		temp.numer = p.numer * numer;
		temp.denom = p.denom * denom;
		return temp;
	}
};
int main()
{
	Fraction *pp = new Fraction;
	pp -> initialize(5,8);
	pp -> print();
}
