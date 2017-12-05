#include "Creature.h"

Creature::Creature() {

}

Creature::Creature(char* Ime, double B, double M) {
	int tmp = 0;

	this->Ime = new char[30];

	for (int i = 0; i < 30; i++) {
		this->Ime[i] = *Ime + i;
	}

	this->B = B;
	this->M = M;
	
}


Creature::~Creature() {
	
}
