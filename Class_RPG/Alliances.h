#ifndef	_ALLIANCES_H_
#define	_ALLIANCES_H_

#include "creatures.h"
#include "kill_count.h"

class Ally : public Creature {
	int gold;
	int xp;
	KillCount kills;
};

class Enemy : public Creature {
	int given_xp;
	int given_gold;
};

#endif