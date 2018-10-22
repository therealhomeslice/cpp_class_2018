//
//	Exercise C-1
//
//	Write a program which inputs a string and counts the number
//	of times the first character occurs in the string.
//
#include <stdio.h>
#include <string.h>

int main()
{
	char word[100];
	int count = 0, length, i;
	
	printf("Input a string (no spaces): ");
	scanf("%s", word);
	
 	length = strlen(word);

	for (i = 0; i < length; i++) {
		if ( word[i] == word[0] ) {
			count++;
	    }
	}
	
	printf("\'%c\' occurs %d times in \"%s\"\n", word[0], count, word);
}
