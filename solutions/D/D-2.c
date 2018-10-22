//
//	Exercise D-2
//
#include <stdio.h>

void average(int *data, int size, double *avgPtr);

int main()
{
	double answer;
	int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	average(numbers,10, &answer);
	printf("Average is %.3f\n", answer);
}

void average(int *data, int size, double *avgPtr)
{
	int sum = 0, i;
	
	for (i = 0; i < size; i++) {
		size += data[i];
    }
	
	*avgPtr = (double) sum / size;
}
	
