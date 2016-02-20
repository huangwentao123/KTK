#ifndef KTK_Enum_h__
#define KTK_Enum_h__

enum class ESlashState {
	WEAPONCHECKBEFORESLASH, ARMORCHECKBEFORESLASH, SLASHING, SLASHSUCCESS, SLASHFAIL, HURTING, SLASHFINISH
};

enum class ESkillState {
	NONE, CANTUSE, CANUSE, USING
};

enum class EPlayerPanalState {
	SELECTED, CANSELECTED, CANTSELECTED
};

enum class EPlayerColor {
	BULE, RED, YELLOW, DARK
};

enum class EHorseType {
	NONE, DEFENSIVE, OFFENSIVE
};

enum class EEventType {
	REQUEST_CARD
};

enum class EEventState {
	START, HUMAN_RESPONSING, AI_RESPONSING, FINISH
};

enum class EEquipmentPanalState {
	SELECTED, CANSELECTED, CANTSELECTED
};

enum class EEquipmentCard_Type {
	NONE, WEAPON, ARMOR, HORSE
};

enum class ESkillType {
	NONE, ACTIVESKILL, MANDATORYSKILL
};

enum class ESkillName {
	NONE, LUOSHEN, JIANXIONG, HUJIA, TIANDU, YIJI, FANKUI, GUICAI, GANGLIE, LUOYI, TUXI, QINGGUO, RENDE, JIJIANG, WUSHENG, PAOXIAO, GUANXING, KONGCHENG, LONGDAN, JIZHI, QICAI, KEJI, MASHU, TIEJI, ZHIHENG, JIUYUAN, YINGZI, FANJIAN, GUOSE, LIULI, JIEYIN, XIAOJI, QIXI, KUROU, QIANXUN, LIANYING, LIJIAN, BIYUE, WUSHUANG, JIJIU, QINGNANG
};

enum class ECharSex {
	NONE, FEMALE, MALE
};

enum class ECharName {
	NONE, CAOCAO, DAQIAO, DIAOCHAN, GANNING, GUANYU, GUOJIA, HUANGGAI, HUANGYUEYING, HUATUO, LIUBEI, LUXUN, LVBU, LVMENG, MACHAO, SIMAYI, SUNSHANGXIANG, XIAHOUDUN, SUNQUAN, XUZHU, ZHANGFEI, ZHANGLIAO, ZHAOYUN, ZHENJI, ZHOUYU, ZHUGELIANG
};

enum class ECharID {
	NONE, INSURGENT, LORD, MINISTER, SPY
};

enum class ECharForce {
	WEI, SHU, WU, QUN, NONE
};

enum class ECardPileType {
	NONE, DARKCARD, DISCARD, HANDCARD
};

enum class ECardType {
	NONE, BASIC, DELAYEDSTRATEGY, EQUIPMENT, STRATEGY
};

enum class ECardSuit {
	NONE, CLUB, DIAMOND, HEART, SPADE
};

enum class ECardName {
	NONE, ALLOUTOFNONE, ARROWRAIN, BAGUARANK, COUPLESWORDS, DODGE, DRAGONBROADSWORD, DROWNLNHAPPINESS, DUEL, FLAWLESSDEFENSE, GUANSHIAXE, HARVEST, ICESWORD, JUSTICESHIELD, KYLINBOW, LIGHTNING, MURDERWITHBORROWEDWEAPON, OATHLNPEACHGARDEN, PEACH, SABOTAGE, SLASH, SNAKESPEAR, SOUTHLNVASION, THEFT, TRIPLEHALBERD, TSINGGANGSWORD, ZHUGECROSSBOW, JUEYING, ZHUAHUANGFEIDIAN, DILU, ZIXING, CHITU, DAWAN
};

enum class ECardColor {
	NONE, BLACK, RED
};

enum class EStage {
	NONE, READY, JUDGE, DRAWCARD, PLAYCARD, DISCARD, ROUNDEND
};

#endif // KTK_Enum_h__
