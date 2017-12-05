#include "Mantikora.h"

Mantikora::Mantikora() {
	this->I = 0;
	this->K = 0;
	this->O = 0;
	this->U = 0;

	Creature::Creature("", 0, 0);
}

void Mantikora::PromeniMantikora(char * Ime, double I, double K, double O, double U) {
	this->I = I;
	this->K = K;
	this->O = O;
	this->U = U;

	double B = 0.5 * (U + O) * K;
	double M = I * (K + O + U) / 3;

	Creature::Creature(Ime, B, M);
}


Mantikora::~Mantikora() {
	
}

std::ostream & operator<<(std::ostream & izlaz, Mantikora & Mantikore) {
	izlaz << Mantikore.I
		  << Mantikore.K
		  << Mantikore.O
		  << Mantikore.U
		  << Mantikore.Creature::VratiB()
		  << Mantikore.Creature::VratiM();
	return izlaz;
}