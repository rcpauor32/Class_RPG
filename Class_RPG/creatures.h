#ifndef _CREATURES_H_
#define	_CREATURES_H_

#include "globals.h"
#include "kill_count.h"
#include "Alliances.h"

class Creature {
public:
	int hp;
	char name[12];
	CreatureTypes type;

	unsigned int defense;
	unsigned int armor_pen;
	unsigned int atk_power;
	unsigned int atk_speed;

public:
	int AtkCalc(Creature victim);
	int CalcEffectiveness(CreatureTypes att_type, CreatureTypes vict_type);
	
	Creature(CreatureTypes c_type, int health, char n[12], int atkp, int atks, int def);
	virtual ~Creature();

};

class Troll : public Enemy {
	int regen;

class Goblin : public Enemy {
	int poison;
};

#endif