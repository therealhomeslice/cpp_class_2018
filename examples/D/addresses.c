//
//  addresses.c
//

#include <stdio.h>

struct Fraction {
	int n, d;
};

struct Fraction multiply(struct Fraction * x, struct Fraction * y)
{
	struct Fraction temp;
    
	temp.n = x->n * y->n;
	temp.d = x->d * y->d;
    
	return temp;
}

int main()
{
	struct Fraction a, b, c;
    
	a.n = 2;	
    a.d = 3;
    
	b.n = 4; 	
    b.d = 3;
    
	c = multiply(&a, &b);
	printf("Result is %d/%d\n", c.n, c.d);
}



