//
//	Solution 3-1
//
#include <iostream>
using namespace std;

void square(int & left, int & right); //prototyping
main()
{
        cout << "input two integers ";
        int one, two;
        cin >> one >> two;
        square(one, two);
        cout << "squares are " << one << " and " << two << endl;
}
void square(int & left, int & right) //declaring function
{
        right *= right;
        left *= left;
}
