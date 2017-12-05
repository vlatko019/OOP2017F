#include "Azdaja.h"

Azdaja::Azdaja() {
	this->S = 0;
	this->K = 0;
	this->T = 0;
	this->U = 0;

	Creature::Creature("", 0, 0);

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
	izlaz << Azdaje.S
		  << Azdaje.K
		  << Azdaje.T
		  << Azdaje.U
		  << Azdaje.Creature::VratiB()
		  << Azdaje.Creature::VratiM();
	return izlaz;
}
