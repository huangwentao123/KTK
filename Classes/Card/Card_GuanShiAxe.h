#ifndef Card_GuanShiAxe_h__
#define Card_GuanShiAxe_h__

#include "Card_Weapon.h"
#include "Event\Event_Slash.h"

class Card_GuanShiAxe : public Card_Weapon {
public:
	Card_GuanShiAxe(ECardSuit Suit, int number) : Card_Weapon(ECardName::GUANSHIAXE, Suit, number) { }
	void eventResolve(const Event_Slash & slashEvent) const;
};
#endif // Card_GuanShiAxe_h__
