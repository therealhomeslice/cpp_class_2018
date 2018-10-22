//
//  mystrlen.c
//
#include <stdio.h>

#define MAX 100

int mystrlen(char *s);

int main()
{
	char line[MAX];
    
	int length;
    
	fgets(line, MAX, stdin);
	length = mystrlen(line);
	printf("Length of %s", line);
	printf(" is %d\n", length);
}

int mystrlen(char *s)		/* s -> line 	 	*/
{
	int ct = 0;
    
	while(*s != '\0') {     /* end of string	*/
		s++;                /* no, add 1 to s	*/
		ct++;               /* add 1 to ct		*/
	}
	return (ct);
}


