//
//  Deck.h
//

#ifndef DECK_H
#define DECK_H

#include "Card.h"

const int NUM_CARDS_IN_DECK = 52;

class Deck {

private:
    Card theCards[NUM_CARDS_IN_DECK];
    
public:
    Deck();
    
    void display(void);
};

#endif
