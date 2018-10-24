//pointdemo.cpp


#include <iostream>
using namespace std;


class Point
{
	private:
		int x, y;
	public:
		//setting up constructor - default
		Point()	{set(0,0);}
		Point(int x, int y){
			set(x,y);

		}
		void set(int _x, int _y)
		{
			x = _x;
			y = _y; //always set up a default constructor -- good practice
		}

		//op overlords
		//p3 = p1 + p1
		Point operator+(Point pt);
		Point operator-(Point pt);
		//add (mult *) & (compare ==)

		int getx() { return x; }
		int gety() { return y; }

		Point operator+(Point pt)
};

int main(int argc, char **charv)
{
	return 0;
}
