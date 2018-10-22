//
//  typedef-demo.c
//
#include <stdio.h>

struct Fraction {
	int n, d;
};

typedef struct Fraction Frac;

Frac multiply(Frac * x, Frac * y)
{
	Frac temp;
    
	temp.n = x->n * y->n;
	temp.d = x->d * y->d;
	return temp;
}

int main()
{
	Frac a, b, c;
    
	a.n = 2;	
    a.d = 3;
	b.n = 4; 	
    b.d = 3;
    
	c = multiply(&a, &b);
	printf("Result is %d/%d\n", c.n, c.d);
}



