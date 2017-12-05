#include "BeliZec.h"
#include <iomanip>

BeliZec::BeliZec() {
	this->C = 0;
	this->W = 0;

	Creature::Creature(" ", 0, 0);
}

void BeliZec::PromeniBeliZec(char * Ime, double C, double W) {
	this->C = C;
	this->W = W;
	
	Creature::Creature(Ime, W, C);
}


BeliZec::~BeliZec() {

}

std::ostream & operator<<(std::ostream& izlaz, BeliZec& BeliZecevi) {
	izlaz 
		//<< BeliZecevi.DajIme()
		<< std::setprecision(4) << BeliZecevi.C << " "
		<< std::setprecision(4) << BeliZecevi.W << " "
		<< std::setprecision(4) << BeliZecevi.Creature::VratiB() << " "
		<< std::setprecision(4) << BeliZecevi.Creature::VratiM() << " \n";
	return izlaz;
}
