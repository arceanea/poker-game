// Cards Header file for Poker Game
#ifndef CARDS_H
#define CARDS_H
#include <iostream>
#include <string>

class Cards
{
	private:
		std::string suit;
		std::string face;
	public:
		Cards(std::string cardSuit, std::string cardFace);
		std::string print() const;
		Cards();
};

Cards::Cards()
{
}

Cards::Cards(std::string cardSuit, std::string cardFace)
{
	suit = cardSuit;
	face = cardFace;
}

std::string Cards::print() const
{
	return (face + " of " + suit);
}

#endif
