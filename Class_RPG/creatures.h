#include "globals.h"

class Creatures {
public:
	int hp;
	char name[12];
	CreatureTypes type;

	int defense;
	int armor_pen;
	int atk_power;
	int atk_speed;

	int AtkCalc(Creatures&);

};

class Troll : public Creatures {
	Troll(CreatureTypes c_type, int health, char n[12], int atkp, int atks, int def);

};

class Goblin : public Creatures {
	Goblin(CreatureTypes c_type, int health, char n[12], int atkp, int atks, int def);
};

class Hero : public Creatures {
	Hero(CreatureTypes c_type, int health, char n[12], int atkp, int atks, int def);
};