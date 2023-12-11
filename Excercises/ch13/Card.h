#include <iostream>
#include <vector>
#include <string>
using namespace std;
int Deck_size = 52;

struct Card
{
    int suit, rank;

    Card();
    Card(int s, int r);
    string to_string() const;
    bool is_greater(const Card& c2) const;
    bool equals(const Card& c2) const;
    bool Card::equals(const Card& c2, const Card& c1) const;
};

Card::Card() {
    suit = 0; rank = 0;
}

Card::Card(int s, int r) {
    suit = s; rank = r;
}
string Card::to_string() const
{
    vector<string> suit_strings = {"None", "Clubs", "Diamonds",
                                   "Hearts", "Spades"};
    vector<string> rank_strings = {"Joker", "2", "3", "4", "5", "6", "7",
                                   "8", "9", "10", "Jack", "Queen", "King",
                                   "Ace"};

    if (rank == 0) return rank_strings[rank];
    return rank_strings[rank] + " of " + suit_strings[suit];
}
bool Card::equals(const Card& c2) const
{
    return (rank == c2.rank && suit == c2.suit);
}
bool Card::equals(const Card& c2, const Card& c1) const{
    return (c1.rank == c2.rank && c1.suit == c1.suit);
}
bool Card::is_greater(const Card& c2) const
{
    // first check the suits
    if (suit > c2.suit) return true;
    if (suit < c2.suit) return false;

    // if suits are equal, check ranks
    if (rank > c2.rank) return true;
    if (rank < c2.rank) return false;
    // this last statement can be omitted without changing the
    // behavior of the function, but making it arguably less readable

    // if ranks are equal too, 1st card is not greater than the 2nd
    return false;
}
void print_deck(const vector<Card>& deck)
{
    for (int i = 0; i < deck.size(); i++) {
        cout << deck[i].to_string() << endl;
    }
}
int find_card(const Card& card, const vector<Card>& deck)
{
    for (int i = 0; i < deck.size(); i++) {
        if (deck[i].equals(card)) return i;
    }
    return -1;
}
int bin_search(const Card& card, const vector<Card>& deck, int l, int h) {
    int m = (l + h) / 2;
    if (h < 1){
        return 1;
    }
    if (deck[m].equals(card)){
      return m;  
    } 

    if (deck[m].is_greater(card)){
        return bin_search(card, deck, l, m-1);
    }
    else{
        return bin_search(card, deck, m+1, h);
    } 
}
struct Deck {
    vector<Card> deck(Deck_size);
    int bin_search(const Card& card, int l, int h);
};
int Deck::Deck(){
    int i = 0;
    for (int suit = 0; suit <= 3; suit++) {
        for (int rank = 1; rank <= 13; rank++) {
            deck[i].suit = suit;
            deck[i].rank = rank;
            i++;
        }
    }
}
void Deck::shuffle()
{
    for (int i = 0; i < cards.size(); i++) {
        int rand_card = random_between(0, cards.size() - 1);
        swap_cards(i, rand_card);
    }
}
int Deck::bin_search(const Card& card, int l, int h) {
    int m = (l + h) / 2;

    if (deck[m].equals(card)){
        return m;
    } 
    if (deck[m].is_greater(card)){
        return bin_search(card, l, m-1);
    }
    else{
        return bin_search(card, m+1, h);
    }  
}
