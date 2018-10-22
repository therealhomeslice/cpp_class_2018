#
#  Makefile for Chapter 9
#

all: StackTest ListTest ListTest2 IteratorTest

StackTest: StackTest.cpp Stack.h Stack.cpp
	g++ -o StackTest StackTest.cpp

ListTest: ListTest.o List.o
	g++ -o ListTest ListTest.o List.o

ListTest.o: ListTest.cpp List.h
	g++ -c ListTest.cpp


ListTest2: ListTest2.o List.o
	g++ -o ListTest2 ListTest2.o List.o

ListTest2.o: ListTest2.cpp List.h
	g++ -c ListTest2.cpp

List.o: List.cpp List.h
	g++ -c List.cpp


IteratorTest: IteratorTest.o List.o Iterator.o
	g++ -o IteratorTest IteratorTest.o List.o Iterator.o

IteratorTest.o: IteratorTest.cpp List.h Iterator.h
	g++ -c IteratorTest.cpp

Iterator.o: Iterator.cpp Iterator.h List.h
	g++ -c Iterator.cpp




clean:
	rm StackTest ListTest ListTest2 IteratorTest *.o


