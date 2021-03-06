#ifndef Rule_Base_h__
#define Rule_Base_h__

#include "Player/Player.h"
#include "Manager/KTK_Enum.h"
#include "Card/Card.h"
#include "Event/Event_Base.h"

class Rule_Base {
public:
	Rule_Base(const std::shared_ptr<Player> & player);
	std::shared_ptr<Player> getPlayer() const;
	void setPlayer(const std::shared_ptr<Player> & player);
	void readyStage() const;
	void judgeStage() const;
	void drawCardStage() const;
	void playCardStage() const;
	void discardStage() const;
	void roundEndStage() const;
	bool canAsCandidate(ECardName cardName) const;
	void asCardGoal(ECardName cardName) const;
	void equip(const std::shared_ptr<Card> & card) const;
	void unequip(const std::shared_ptr<Card> & card) const;
	void playCard(const std::shared_ptr<Card> & card) const;
	void drawCard(const std::shared_ptr<Card> & card) const;
	std::shared_ptr<Card> removeHandCard(const std::shared_ptr<Card> & card) const;
	int getDistanceForCard(const std::shared_ptr<Card> & card) const;
	int getDistance(const std::shared_ptr<Player> & player) const;
	void beforeProcessEvent(const std::shared_ptr<Event_Base> & event) const;
	void afterProcessEvent(const std::shared_ptr<Event_Base> & event) const;

private:
	std::weak_ptr<Player> m_player;
};

#endif // Rule_Base_h__
