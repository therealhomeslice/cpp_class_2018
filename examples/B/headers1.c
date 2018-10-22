//
//  headers1.c
//
#include <string.h>
#include <stdio.h>

int main ()
{
	char prev[100], line [100];
	
	strcpy(prev, "");            /* empty string */
	
	while (fgets(line, 100, stdin) != NULL) {
		if (strcmp(line, prev) != 0) {
			printf("%s\n", line);
			strcpy(prev, line);
		}
	}
}
