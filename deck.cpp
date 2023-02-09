#include "hw02.h"

deck::deck() {
    
    int i = 0;

    // initalize deck of 52 cards 13 card per 4 different suits
    for(int j = 0; j < NUM_SUITS; j++) {
        for(int l = 0; l < NUM_VALUES; l++) {
             card[i].value = l;
             card[i].suit = (Suit)j;
             i++;
        }
    }
}
void deck::printDeck() const {

    // for all 52 card check value and suit and print coresponding strings
    // first switch = value
    // second switch = suit
    for (int i = 0; i < MAX; i++) {
        switch (card[i].value) {
            case 0:
                cout << "Ace";
                break;
            case 1:
                cout << "Two";
                break;
            case 2:
                cout << "Three";
                break;
            case 3:
                cout << "Four";
                break;
            case 4:
                cout << "Five";
                break;
            case 5:
                cout << "Six";
                break;
            case 6:
                cout << "Seven";
                break;
            case 7:
                cout << "Eight";
                break;
            case 8:
                cout << "Nine";
                break;
            case 9:
                cout << "Ten";
                break;
            case 10:
                cout << "Jack";
                break;
            case 11:
                cout << "Queen";
                break;
            case 12:
                cout << "King";
                break;
        }
        switch (card[i].suit) {
            case 0:
                cout << " of Spades" << endl;
                break;
            case 1:
                cout << " of Clubs" << endl;
                break;
            case 2:
                cout << " of Hearts" << endl;
                break;
            case 3:
                cout << " of Diamonds" << endl;
                break;
        }
    }
    cout << endl;
}
bool deck::operator==(const deck &d) {

    bool con;

    // if all 52 cards have equal value, suit and position return true
    // if any of the 52 card do not have equal value, suit and position return false
    for(int i = 0; i < MAX; i++) {
        if((card[i].value == d.card[i].value) && (card[i].suit == d.card[i].suit)) {
            con = true;
        } else {
            con = false;
            break;
        }
    }
    return con;
}
bool deck::operator!=(const deck &d) {

    bool con;

    // if all 52 cards have equal value, suit and position return false
    // if any of the 52 card do not have equal value, suit and position return true
    for(int i = 0; i < MAX; i++) {
        if((card[i].value != d.card[i].value) || (card[i].suit != d.card[i].suit)) {
            con = true;
            break;
        } else {
            con = false;
        }
    }
    return con;
}
void deck::pShuffle(deck &d) {

    deck temp;

    // copies deck &d to deck temp
    for(int j = 0; j < MAX; j++) {

        temp.card[j] = d.card[j]; 
    }

    // split deck in half and reordering via alternating from each side of split
    for(int i = 0; i < MAX / 2; ++i) {

        d.card[i * 2] = temp.card[i];
        d.card[i * 2 + 1] = temp.card[i + MAX / 2];
    }
}
