//
//  headers2.c
//
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*  If using gcc compiler, must use -lm   */
/*  option at END of command line.        */

int main()
{
	char buffer[100];
	double n1, n2, n3;
	
	printf("Enter a base: ");
	fgets(buffer, 100, stdin);
	n1 = atof(buffer);
	
	printf("Enter an exponent: ");
	fgets(buffer, 100, stdin);
	n2 = atof(buffer);
	
	n3 = pow(n1, n2);
	printf("%f raised to the %f is %f\n", n1, n2, n3);
}



