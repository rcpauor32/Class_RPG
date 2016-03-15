#include "creatures.h"
#include "globals.h"

Troll::Troll(CreatureTypes c_type, int health, char n[12], int atkp, int atks, int def){

};

int Troll::AtkCalc(Creatures& creature) {
	int dmg;
	
	switch (creature.type) {
	case goblin_t:
		atk_power *= 1.5;
	}

	dmg = atk_power * (atk_speed / TURN_DURATION);

	return dmg;
}

int Goblin::AtkCalc(Creatures& creature) {
	int dmg;
	
	switch (creature.type) {
	case hero_t:
		atk_power *= 1.3;
		break;
	case troll_t:
		atk_power *= .8;
		break;
	}

	dmg = (atk_power * (atk_speed / TURN_DURATION)) - creature.defense * armor_pen;

	return dmg;
}

int Hero::AtkCalc(Creatures& creature) {
	int dmg;
	dmg = atk_power * (atk_speed / TURN_DURATION);

	return dmg;
}
