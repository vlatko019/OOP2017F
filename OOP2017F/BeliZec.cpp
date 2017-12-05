#include "BeliZec.h"

BeliZec::BeliZec() {
	this->C = 0;
	this->W = 0;

	Creature::Creature("", 0, 0);
}

void BeliZec::PromeniBeliZec(char * Ime, double C, double W) {
	this->C = C;
	this->W = W;
	
	Creature::Creature(Ime, W, C);
}


BeliZec::~BeliZec() {

}

std::ostream & operator<<(std::ostream& izlaz, BeliZec& BeliZecevi) {
	izlaz << BeliZecevi.C
		<< BeliZecevi.W
		<< BeliZecevi.Creature::VratiB()
		<< BeliZecevi.Creature::VratiM();
	return izlaz;
}
