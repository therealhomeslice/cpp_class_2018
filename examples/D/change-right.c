//
//  change-right.c
//
#include <stdio.h>

void change_right(int * a);

int main()
{
	int a = 10;
    
	printf("Before call: %d\n", a);
	change_right(&a);
	printf("After call: %d\n", a);
}

void change_right(int * param)
{
	*param = *param + 1;
	printf("Inside function: %d\n", *param);
}



