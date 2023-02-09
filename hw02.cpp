#include "hw02.h"

/********************************************************
 Creates a deck of cards and does a perfect shuffle
 until the deck returns to its original state.
 -------------------------------------------------------
 Creates a deck of cards usings deck class, Card struct,
 and Suit enum. Default constructor initialized deck
 to default state. Than perfect shuffle algorithm
 shuffles deck and compares to a default deck until
 the deck match. Each time the original deck is shuffled
 a counter in incremented. The default state is printed,
 the shuffled state is printed, than the default state
 after the deck has been shuffled back to default. The
 number of shuffled is output.

 OUTPUT: deck - default
 		 deck - shuffled
		 deck - default from shuffle
		 number of shuffles
*********************************************************/


int main() {

    int shuffles = 1;
    deck deck, deckA;

	// output for class heading
	cout << "***********************************\n";
	cout << "Programmed By: Nathan Milton\n";
	cout << "Student Id   : 1204398\n";
	cout << "Assignment   : HW02\n";
	cout << "CS1C         : T/TH 1:30\n";
	cout << "***********************************\n" << endl;

    deck.printDeck();

    deck.pShuffle(deck);
    deck.printDeck();
    
    // shuffling deck until it returns to default order
    while(deck != deckA) {
        deck.pShuffle(deck);
        shuffles++;
    } 

    deck.printDeck();

    cout << "It took " << shuffles << " shuffles to return the deck to its default state." << endl;

    return 0;
}
