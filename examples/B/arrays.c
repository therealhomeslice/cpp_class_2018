//
//  arrays.c
//
#include <stdio.h>

#define SIZE 5

int main()
{
	int x[SIZE] = { 1, 2, 3, 4, 5 };
	int i, end, temp;
	
	printf("Print array elements\n");
	for (i = 0; i < SIZE; i++) {
		printf("%d ", x[i]);
	}
	
	printf("\nAdd 5 to each element\n");
	for (i = 0; i < SIZE; i++) {
		x[i] = x[i] + 5;
	}
	
	printf("Print them again\n");
	for (i = 0; i < SIZE; i++) {
		printf("%d ", x[i]);
	}
	printf("\n");
}



