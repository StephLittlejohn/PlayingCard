#include <iostream>
#include <conio.h>

using namespace std;

// Enumerators
enum Suit
{
	SPADES,
	HEARTS,
	DIAMONDS,
	CLUBS
};

enum Rank
{
	TWO = 2,
	THREE = 3,
	FOUR = 4,
	FIVE = 5,
	SIX = 6,
	SEVEN = 7,
	EIGHT = 8,
	NINE = 9,
	TEN = 10,
	JACK = 11,
	QUEEN = 12,
	KING = 13,
	ACE = 14
};

// Structure
struct Card
{
	Suit suit;
	Rank rank;
};

int main()
{
	_getch();
	return 0;
}