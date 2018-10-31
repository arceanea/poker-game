#include <iostream>
#include "Deck.h"
#include "Cards.h"

int main()
{
	Deck deck;
	deck.printDeck();
	deck.shuffle();
	deck.shuffle();
	deck.shuffle();
	deck.shuffle();
	deck.shuffle();
	

	std::cout << std::endl << std::endl;
	deck.printDeck();
	std::cout << std::endl << std::endl;

	return 0;
}