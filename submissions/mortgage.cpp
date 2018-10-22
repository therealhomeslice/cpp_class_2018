#include <iostream>
#include <string>
#include <math>

struct Mortgage
{
	double amount;
	double rate;
	int years;
	double payment;
	double balance;
	double principal
	double interest;
	
	void setValues(int yrs, double amt, double intRate)
	{
		years = yrs;
		amount = amt;
		rate = intRate;
		balance = amt;
	}

	double computePayment()
	{
		double J = rate/1200;
		int N = years*30;
		payment = amount * (J/(1 - pow((1 + J),(-1*N))))
	}
	void makePayment()
	{
		balance -= payment;
	}
	double getBalance()
	{
		return balance;
	}
	double getInterest()
	{

	}
	double getPrincipal()
	{
	}
	double getPayment()
	{
		return payment;
	}
}

int main()
{
	Mortgage *pp = new Mortgage;
	pp -> setValues(30,100000,7.5);
	cout << getPayment() << endl;
}
