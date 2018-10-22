//
//  Deck.cpp
//

#include "Deck.h"

Deck::Deck()
{
    int r, s;
    int index = 0;
    
    for(s = Card::HEARTS; s <= Card::SPADES; s++) {
        for(r = Card::TWO; r <= Card::ACE; r++) {
            theCards[index].setRank( (Card::CardRank) r);
            theCards[index].setSuit( (Card::CardSuit) s);
            index++;
        }
    }

}
    
void Deck::display()
{
    int i;
    
    for(i = 0; i < NUM_CARDS_IN_DECK; ++i) {
        theCards[i].display();
    }
}


