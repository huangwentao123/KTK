#ifndef Rule_DiaoChan_h__
#define Rule_DiaoChan_h__

#include "Rule_Base.h"

class Rule_DiaoChan : public Rule_Base {


public:
	void playCardStage() const;

	void roundEndStage() const;

	void biYue() const;

	void liJian() const;
};
#endif // Rule_DiaoChan_h__
