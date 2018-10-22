all: fraction1/fraction-test fraction2/fraction-test pair-test array/array-test


fraction1/fraction-test: fraction1/fraction-test.o fraction1/Fraction.o
	g++ -o fraction1/fraction-test fraction1/fraction-test.o fraction1/Fraction.o

fraction1/fraction-test.o: fraction1/fraction-test.cpp fraction1/Fraction.h
	g++ -c -o fraction1/fraction-test.o fraction1/fraction-test.cpp

fraction1/Fraction.o: fraction1/Fraction.cpp fraction1/Fraction.h
	g++ -c -o fraction1/Fraction.o  fraction1/Fraction.cpp


fraction2/fraction-test: fraction2/fraction-test.o fraction2/Fraction.o
	g++ -o fraction2/fraction-test fraction2/fraction-test.o fraction2/Fraction.o

fraction2/fraction-test.o: fraction2/fraction-test.cpp fraction2/Fraction.h
	g++ -c -o fraction2/fraction-test.o fraction2/fraction-test.cpp

fraction2/Fraction.o: fraction2/Fraction.cpp fraction2/Fraction.h
	g++ -c -o fraction2/Fraction.o  fraction2/Fraction.cpp


pair-test: pair-test.cpp
	g++ -o pair-test pair-test.cpp


array/array-test: array/array-test.o array/IntArray.o
	g++ -o array/array-test array/array-test.o array/IntArray.o

array/array-test.o: array/array-test.cpp array/IntArray.h
	g++ -c -o array/array-test.o array/array-test.cpp

array/IntArray.o: array/IntArray.cpp array/IntArray.h
	g++ -c -o array/IntArray.o  array/IntArray.cpp

clean: 
	rm fraction1/fraction-test fraction1/*.o  fraction2/fraction-test fraction2/*.o pair-test array/array-test array/*.o
