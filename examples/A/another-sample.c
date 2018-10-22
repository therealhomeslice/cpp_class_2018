//
//  another-sample.c
//
#include <stdio.h>

void process()
{
	printf("process is a simple function\n");
}

void domore()
{
	printf("domore is another function\n");
}

int main()
{
	printf("BEGIN\n");
	process();
	domore();
	printf("END\n");
}

