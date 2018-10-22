//
//  square.c
//
#include <stdio.h>

#define SQUARE(X)    ((X) * (X))

int main()
{
	int x = 10;
	int answer;
	
	answer = SQUARE(x);
	printf("%d\n", answer);
	printf("%d\n", SQUARE(x + 1));
}



