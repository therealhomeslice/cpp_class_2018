//
//  DeckTest.cpp
//

#include <iostream>

#include "Deck.h"

int main() 
{
    Deck myDeck;
    
    myDeck.display();
    myDeck.shuffle();
    
    std::cout << std::endl << "--- AFTER SHUFFLE ---" << std::endl;
    myDeck.display();
    
    Card myHand[5];
        std::cout << std::endl << "--- DEALING 5 CARDS ---" << std::endl;
    for (int i = 0; i < 5; ++i) {
        myHand[i] = myDeck.deal();
        myHand[i].display();
    }
    
    
}
