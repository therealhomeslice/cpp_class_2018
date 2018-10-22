//
//	Exercise B-1
//
//	Write a macro that returns the cube of an expression.
//
#include <stdio.h>

#define CUBE(X) ((X) * (X) * (X))

int main()
{
	int x = 3, z = 0;
	
	printf("z = %d, x = %d\n", z, x);
	z = CUBE(x);
	printf("AFTER z = CUBE(x): z = %d, x = %d\n", z, x);
	
	z = CUBE(x + 1);
	printf("AFTER z = CUBE(x + 1): z = %d, x = %d\n", z, x);
	
	z = CUBE(x++);
	printf("AFTER z = CUBE(x++): z = %d, x = %d\n", z, x);
}
