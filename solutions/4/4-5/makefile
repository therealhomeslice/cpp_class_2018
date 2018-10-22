#
#  Makefile
#

CardTest: CardTest.cpp Card.o
	g++ -o CardTest CardTest.cpp Card.o
	
Card.o: Card.cpp Card.h
	g++ -c Card.cpp
	
clean: 
	rm CardTest *.o	
	
	
