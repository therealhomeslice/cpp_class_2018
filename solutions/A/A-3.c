//
//	Exercise A-3
//
//	Ask the user to input a few numbers.  Print the sum of the integers
//	between and including those 2 numbers. Make sure that the first number
//	is lower than the second number.
//
#include <stdio.h>

int main()
{
	int first, second, sum = 0, i;
	
	printf("Enter the first number: ");
	scanf("%d", &first);
	
	printf("Enter the second number: ");
	scanf("%d", &second);
	
	while(second < first) {
		printf("ERROR: First number not < second number\n");
		printf("Re-enter second number: ");
		scanf("%d", &second);
	}
	
	for(i = first; i <=second; i++) {
		sum += i;
	}
	
	printf("The sum of the integers between ");
	printf("%d and %d is %d\n", first, second, sum);
}
