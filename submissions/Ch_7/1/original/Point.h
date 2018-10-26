//Point.h
#ifdef POINT_H
#define POINT_H


class Point
{
	protected:
		int x, y;

	public:
		Point(int a = 0, int b = 1);

		int getX();
		int getY();

		void print();
};

#endif
