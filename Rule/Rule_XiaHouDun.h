#ifndef Rule_XiaHouDun_h__
#define Rule_XiaHouDun_h__

#include "Rule_Character.h"
#include "Event\Event_Hurt.h"

class Rule_XiaHouDun : public Rule_Character {


public:
	void beforeProcessEvent(const std::shared_ptr<Event_Base>& event) const;

	void gangLie(const std::shared_ptr<Event_Hurt>& event) const;
};
#endif // Rule_XiaHouDun_h__
