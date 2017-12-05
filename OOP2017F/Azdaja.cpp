#include "Azdaja.h"
#include <iomanip>

Azdaja::Azdaja() {
	this->S = 0;
	this->K = 0;
	this->T = 0;
	this->U = 0;

	Creature::Creature(" ", 0, 0);

}

void Azdaja::PromeniAzdaja(char * Ime, double S, double K, double T, double U) {
	this->S = S;
	this->K = K;
	this->T = T;
	this->U = U;

	double B = T * (1 + K) * U; 
	double M = S * K;

	Creature::Creature(Ime, B, M);
}


Azdaja::~Azdaja() {

}

std::ostream & operator<<(std::ostream & izlaz, Azdaja & Azdaje) {
	izlaz
		//<< Azdaje.Creature::DajIme()
		<< std::setprecision(4) << Azdaje.S << " "
		<< std::setprecision(4) << Azdaje.K << " "
		<< std::setprecision(4) << Azdaje.T << " "
		<< std::setprecision(4) << Azdaje.U << " "
		<< std::setprecision(4) << Azdaje.Creature::VratiB() << " "
		<< std::setprecision(4) << Azdaje.Creature::VratiM() << " \n";
	return izlaz;
}
