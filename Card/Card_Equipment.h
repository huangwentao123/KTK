#ifndef Card_Equipment_h__
#define Card_Equipment_h__

#include "Card.h"

class Card_Equipment : public Card {

private:
	EEquipmentCard_Type m_equipType;
	bool m_canUse;
	int m_state;

public:
	EEquipmentCard_Type getEquipmentType() const;

	int getState() const;

	void setState(const int state) const;

	Card_Equipment();
};
#endif // Card_Equipment_h__
