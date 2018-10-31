// Deck Header File for Poker Game
#ifndef DECK_H
#define DECK_H
#include "Cards.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

class Deck
{
  private:
  	Cards *deck;
  	int currentCard;
  	Cards *hand;
  	Cards *game;
  public:
   	Deck();
   	void shuffle();
   	Cards dealCard();
   	void printDeck() const;
};

const int CARDS_PER_DECK = 52;
// const int CARDS_PER_HAND = 2;
// const int CARDS_PER_GAME = 5;

Deck::Deck()
{
  currentCard = 0;
  std::string suit[] = { "Clubs", "Diamonds", "Hearts", "Spades" };
  std::string face[] = { "Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };
  deck = new Cards[CARDS_PER_DECK];

  for (int i = 0; i < CARDS_PER_DECK; i++)
  {
    deck[i] = Cards(suit[i / 13], face[i % 13]);
  }
}

void Deck::shuffle()
{
  srand(time(NULL));
  currentCard = 0;
  for(int i = 0; i < CARDS_PER_DECK; i++)
  {
    int j = (rand() % CARDS_PER_DECK);
    Cards temp = deck[i];
    deck[i] = deck[j];
    deck[j] = temp;
  }
}

// Cards Deck::dealCard()
// {
//  hand = new Cards[CARDS_PER_HAND];
//  game = new Cards[CARDS_PER_GAME];
// }

void Deck::printDeck() const
{
  for(int i = 0; i < CARDS_PER_DECK; i++)
  {
    std::cout << deck[i].print() << std::endl;
  }
}


#endif
