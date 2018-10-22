//
//  Card.cpp
//

#include <iostream>
#include <string>

#include "Card.h"

std::string Card::rankNames[] =
    {"unused", "unused", "Two", "Three", "Four", "Five", "Six",
     "Seven", "Eight", "Nine", "Ten", "Jack", "Queen","King",
      "Ace", "unspecified"};
         
std::string Card::suitNames[] = 
    {"Hearts", "Clubs", "Diamonds", "Spades", "unspecified"};

Card::Card()
{
    rank = NO_RANK;
    suit = NO_SUIT;
}

Card::Card (CardRank r, CardSuit s) 
{
    rank = r;
    suit = s;
}

//  The number of points a card is worth in a game of Blackjack.
//  Aces are worth 11, Kings, Queens, and Jacks are worth 10,
//  and all other cards are worth their numeric value.

int Card::blackjackValue()
{
    int value = 0;
    
    switch(rank) {
        case ACE:
            value = 11;
            break;
        case KING:
        case QUEEN:
        case JACK:
            value = 10;
            break;
        default:
            value = rank;
     }
     
     return value;
}

// The number of points a card is worth in a game of Bridge.
// Aces are worth 4, Kings 3, Queens 2, and Jacks worth 1. 
// All other cards are worth 0 points.

int Card::bridgeValue()
{
    int value = 0;
    
    if(rank == ACE) {
        value = 4;
    }
    else if(rank == KING) {
        value = 3;
    }
    else if(rank == QUEEN) {
        value = 2;
    }
    else if(rank == JACK) {
        value = 1;
    }
    
    return value;
}

// The number of points a card is worth in a game of Hearts. 
// The Queen of Spades is worth 13 points, each card with a 
// suit of hearts is worth 1 point, and all other cards are
// worth 0 points.

int Card::heartsValue()
{
    int value = 0;
    
    if(suit == HEARTS) {
        value = 1;
    }
    else if(suit == SPADES && rank == QUEEN) {
        value = 13;
    }
      
    return value;
}
			
void Card::display()
{
    std::cout << rankNames[rank] << " of " 
         << suitNames[suit] << std::endl;

}
