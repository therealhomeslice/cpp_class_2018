//
//  CardTest.cpp
//

#include <iostream>

#include "Card.h"

int main() 
{
    Card myCard(Card::QUEEN, Card::SPADES);
        
    myCard.display();
    
    std::cout << "Blackjack = " << myCard.blackjackValue() << std::endl;
    std::cout << "Bridge    = " << myCard.bridgeValue() << std::endl;
    std::cout << "Hearts    = " << myCard.heartsValue() << std::endl;  
}
