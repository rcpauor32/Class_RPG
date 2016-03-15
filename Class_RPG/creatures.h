#include "globals.h"

class Creatures {
public:
	int hp;
	char name[12];
	CreatureTypes type;

	int defense;
	int armor_pen;
};

class Troll : public Creatures {
	Troll(CreatureTypes c_type, int health, char n[12], int atkp, int atks, int def);

	int atk_power;
	int atk_speed;
	

public:
	int AtkCalc(Creatures&);
};

class Goblin : public Creatures {
	int atk_power;
	int atk_speed;
	
public:
	int AtkCalc(Creatures&);
};

class Hero : public Creatures {
	int atk_power;
	int atk_speed;

public:
	int AtkCalc(Creatures&);
};