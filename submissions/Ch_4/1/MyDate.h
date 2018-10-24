//MyDate.h

class MyDate()
{
	private:
		int month;
		int day;
		int year;
		void help(int a, int b, int c);
	public:
		MyDate(int d, int m, int y);
		MyDate(int d, int m);
		MyDate(int d);
		MyDate();

		void print();
		int getDay();
		int getMonth();
		int getYear();
}
