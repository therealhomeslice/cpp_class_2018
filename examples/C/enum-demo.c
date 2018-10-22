//
//  enum-demo.c
//
#include <stdio.h>

enum Days
{
	Sun, Mon, Tues, Wed, Thurs, Fri, Sat
};

int main()
{
	enum Days i;
    
	for (i = Sun; i <= Sat; i++) {
		if (i == Sat || i == Sun) {
			printf("Not open on Weekends\n");
        }
		else if (i >= Mon && i <= Thurs) {
			printf("Open 9AM - 5PM Weekdays\n");
        }
		else {
			printf("Open 9AM - 9PM on Fridays\n");
        }
	}
}



