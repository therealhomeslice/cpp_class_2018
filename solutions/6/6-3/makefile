#
#  Makefile
#

DeckTest: DeckTest.cpp Card.o Deck.o
	g++ -o DeckTest DeckTest.cpp Card.o Deck.o
	
Card.o: Card.cpp Card.h
	g++ -c Card.cpp
	
Deck.o: Deck.cpp Card.h Deck.h
	g++ -c Deck.cpp	
	
clean: 
	rm DeckTest *.o	
	
	
