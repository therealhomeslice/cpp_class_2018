//
//  Deck.cpp
//

#include <algorithm>

#include "Deck.h"

Deck::Deck()
{


    int r, s;
    int index = 0;
    
    theCards.resize(NUM_CARDS_IN_DECK);
    
    for(s = Card::HEARTS; s <= Card::SPADES; s++) {
        for(r = Card::TWO; r <= Card::ACE; r++) {
            theCards[index].setRank( (Card::CardRank) r);
            theCards[index].setSuit( (Card::CardSuit) s);
            index++;
        }
    }

}

Card Deck::deal()
{
    Card nextCard;
    
    nextCard = theCards.back();
    theCards.pop_back();            // remove
    
    return nextCard;
}
 
void Deck::shuffle()
{
    std::random_shuffle (theCards.begin(), theCards.end());
}
    
void Deck::display()
{
    std::vector<Card>::iterator it;
    
    for(it = theCards.begin(); it != theCards.end(); ++it) {
        (*it).display();
    }

}


