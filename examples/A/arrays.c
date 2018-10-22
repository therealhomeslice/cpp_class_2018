//
//  arrays.c
//
#include <stdio.h>

int main()
{
	int x[5] = { 1, 2, 3, 4, 5 };
	int i, end, temp;
	
	printf("Print array elements\n");
	for (i = 0; i < 5; i++) {
		printf("%d ", x[i]);
	}
	
	printf("\nAdd 5 to each element\n");
	for (i = 0; i < 5; i ++) {
		x[i] = x[i] + 5;
	}
	
	printf("Print them again\n");
	for (i = 0; i < 5; i++) {
		printf("%d ", x[i]);
	}
	
	printf("\nNow reverse them\n");
	end = 4;
	for ( i = 0; i < end; i++) {
		temp = x[i];
		x[i] = x[end];
		x[end] = temp;
		end = end - 1;
	}
	
	printf("Print them again\n");
	for (i = 0; i < 5; i++) {
		printf("%d ", x[i]);
	}
}
