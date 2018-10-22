//
//	def-param.cpp
//

#include <iostream>

void print(const char *s, int start = 0)
{
    std::cout << s + start << std::endl;
}

int main( )
{
    const char *string = "useful";
	 
    print(string);         // prints 'useful'
    print(string, 3);      // prints 'ful'

    const char *string2 = "parameter";
	 
    print(string2);       // prints 'parameter'
    print(string2, 4);    // prints 'meter'
 }
