//
//  Card.h
//

#ifndef CARD_H
#define CARD_H

#include <string>

class Card {
public:
    enum CardRank { TWO = 2, THREE, FOUR, FIVE, SIX, SEVEN,
        EIGHT, NINE, TEN, JACK, QUEEN, KING, ACE, NO_RANK };
        
    enum CardSuit { HEARTS, CLUBS, DIAMONDS, SPADES, NO_SUIT };

private:
    CardRank rank;
    CardSuit suit;  
    
    static std::string rankNames[16];
    static std::string suitNames[5];

public:
    Card();
    Card(CardRank r, CardSuit s);
    
    CardRank getRank() { return rank; }
    CardSuit getSuit() { return suit; }
    
    void setRank(CardRank r) { rank = r; }
    void setSuit(CardSuit s) { suit = s; }
        
    int blackjackValue(void);
    int bridgeValue(void);
    int heartsValue(void);  
    
    void display(void);
};

#endif
