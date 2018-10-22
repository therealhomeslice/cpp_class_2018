//
//	Exercise D-1
//
#include <stdio.h>

double average(int *data, int size);

int main()
{
	double answer;
	int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	answer = average(numbers,10);
	printf("Average is %.3f\n", answer);
}

double average(int *data, int size)
{
	int sum = 0, i;
	
	for (i = 0; i < size; i++) {
		sum += data[i];
	}
	
	return (double) sum / size;
}
