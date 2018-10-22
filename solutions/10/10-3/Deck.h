//
//  Deck.h
//

#ifndef DECK_H
#define DECK_H

#include <vector>

#include "Card.h"


const int NUM_CARDS_IN_DECK = 52;

class Deck {

private:
    std::vector<Card> theCards;
    
public:
    Deck();
    
    void shuffle(void);
    Card deal(void);
    
    void display(void);
};

#endif
