//
//	Exercise D-3
//
//  Write a swap function swap that exchanges
//    the values of two fractions
//
#include <stdio.h>

struct Fraction {
	int n, d;
};

void swap(struct Fraction *p1, struct Fraction *p2);
void print(struct Fraction f);

int main()
{
	struct Fraction x, y;
	
	x.n = 1; 
	x.d = 2;

	y.n = 3;
	y.d = 5;

    printf("BEFORE:\n");	
	print(x);
	print(y);
	
	swap(&x, &y);
	
	printf("AFTER:\n");
	print(x);
	print(y);
}

void print(struct Fraction f)
{
	printf("%d/%d\n", f.n, f.d);
}

void swap(struct Fraction *p1, struct Fraction *p2)
{
	struct Fraction temp = *p1;
	
	*p1 = *p2;
	*p2 = temp;
}
