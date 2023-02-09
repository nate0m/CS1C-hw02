#ifndef _HW02_H
#define _HW02_H

#include <iostream>
using namespace std;

enum Suit {

    Spades,
    Clubs,
    Hearts,
    Diamonds
};
struct Card {

    int value;
    Suit suit;
};
class deck {

    public:
        deck(); // default constructor

        void printDeck() const; // PRECONDITION  - deck object created 
								// POSTCONDITION - deck is printed to console

        void pShuffle(deck &d); // PRECONDITION  - deck object created
								// POSTCONDITION - deck is shuffled

        bool operator==(const deck &d); // PRECONDITION  - 2 deck objects created
									    // POSTCONDITION - decks compared if ==

        bool operator!=(const deck &d); // PRECONDITION  - 2 deck objects created
										// POSTCONDITION - decks compared if !=

    private:
        static const int MAX = 52;        // number of cards in a full deck
        static const int NUM_SUITS = 4;   // number of suits in a full deck
        static const int NUM_VALUES = 13; // number of values in a full suit
        Card card[MAX];                   // array of cards = deck
};

#endif
