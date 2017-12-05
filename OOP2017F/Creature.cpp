#include "Creature.h"

Creature::Creature() {

}

Creature::Creature(char* Ime, double B, double M) {
	int tmp = 0;
	do {
			tmp++;
	} while (Ime[tmp] != '\0');

	Ime = new char[tmp];

	for (int i = 0; i < tmp; i++) {
		this->Ime[i] = Ime[i];
	}

	this->B = B;
	this->M = M;
	
}


Creature::~Creature() {
	delete[] Ime;
}
