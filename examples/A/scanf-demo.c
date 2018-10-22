//
//  scanf-demo.c
//
#include <stdio.h>

int main()
{
	int howMany;
	char descrip[20];
	double price;

	printf("Enter a number: ");
	scanf("%d", &howMany);
	
	printf("Enter a description (no spaces): ");
	scanf("%s", descrip);
	
	printf("Enter a price: ");
	scanf("%lf", &price);
	
	printf("%d %s's cost $%.2f\n", howMany, descrip, howMany * price);
}



