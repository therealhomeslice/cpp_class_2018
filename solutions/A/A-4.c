//
//	Exercise A-4
//
//	Write a function which produces the sum of the squares of the
//	2 integers passed to the function.
//

#include <stdio.h>

int sum_of_squares(int side1, int side2);

int main()
{
	int first, second, result;
	
	printf("Enter the first number: ");
	scanf("%d", &first);
	
	printf("Enter the second number: ");
	scanf("%d", &second);
	
	result = sum_of_squares(first, second);
	printf("Sum of %d squared and %d squared is %d\n",
		      first,         second,         result);
}

int sum_of_squares(int left, int right)
{
	int result;
	
	result = left * left + right * right;
	return result;
}
