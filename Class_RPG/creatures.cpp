#include "creatures.h"
#include "globals.h"
#include <string.h>


Creature::Creature(CreatureTypes c_type, int health, char n[12], int atkp, int atks, int def){
	type = c_type;
	hp = health;
	strcpy_s(name, n);
	atk_power = atkp;
	atk_speed = atks;
	defense = def;

};

Creature::~Creature() {};

int Creature::AtkCalc(Creature victim) {
	int dmg;
	
	atk_power *= CalcEffectiveness(type, victim.type);
	
	dmg = atk_power - (victim.defense - victim.defense * armor_pen);

	return dmg;
}

int Creature::CalcEffectiveness(CreatureTypes att_type, CreatureTypes vict_type)  {
	int effectiveness;

	switch (att_type) {
	case GOBLIN:
		switch (vict_type) {
		case TROLL: 
			effectiveness = 0.8;
		}
		break;

	case TROLL:
		switch (vict_type) {
		case GOBLIN:
			effectiveness = 1.2;
		}
		break;

	/*case HERO:					// Commented to be used on future versions
		switch (vict_type) {		// with more enemy types
			
		}
		break;
		*/

	}

	return effectiveness;
}
