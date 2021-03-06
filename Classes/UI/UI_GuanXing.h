#ifndef UI_GuanXing_h__
#define UI_GuanXing_h__

#include <vector>
#include "UI_Card.h"

class UI_GuanXing : public cocos2d::Node {
public:
	static UI_GuanXing * create(const std::vector<std::shared_ptr<Card>> & topCards) {
		UI_GuanXing * pRet = new(std::nothrow) UI_GuanXing();
		if (pRet && pRet->initWithCards(topCards)) {
			pRet->autorelease();
			return pRet;
		}
		else {
			delete pRet;
			pRet = NULL;
			return NULL;
		}
	}
	bool initWithCards(const std::vector<std::shared_ptr<Card>> & topCards);
	const std::vector<std::shared_ptr<UI_Card>> & getTopCards();
	const std::vector<std::shared_ptr<UI_Card>> & getBottonCards();
protected:
	UI_GuanXing() = default;
private:
	std::vector<std::shared_ptr<UI_Card>> m_topCards;
	std::vector<std::shared_ptr<UI_Card>> m_bottonCards;
};
#endif // UI_GuanXing_h__
