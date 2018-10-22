//
//  functions.c
//
#include <stdio.h>

int multiply(int a, int b)  
{				
	int c;	
	
	c = a * b; 
	return c;
}

void print(int param)		
{				
	printf("%d\n", param);	
}

int main()
{
	int x = 10, y = 20, z;
	
	z = multiply(x, y);
	print(z);
}


