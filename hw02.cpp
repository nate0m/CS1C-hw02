#include "hw02.h"

int main() {

    int shuffles = 1;
    deck deck, deckA;

    deck.printDeck();

    deck.pShuffle(deck);
    deck.printDeck();
    
    // shuffling deck until it returns to default order
    while(deck != deckA) {
        deck.pShuffle(deck);
        shuffles++;
    } 

    deck.printDeck();

    cout << endl << "It took " << shuffles << " shuffles to return the deck to its default state.";

    return 0;
}
