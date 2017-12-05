#include "Mantikora.h"
#include <iomanip>

Mantikora::Mantikora() {
	this->I = 0;
	this->K = 0;
	this->O = 0;
	this->U = 0;

	Creature::Creature(" ", 0, 0);
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
	izlaz 
		<< std::setprecision(4) << Mantikore.I << " "
		<< std::setprecision(4) << Mantikore.K << " "
		<< std::setprecision(4) << Mantikore.O << " "
		<< std::setprecision(4) << Mantikore.U << " "
		<< std::setprecision(4) << Mantikore.Creature::VratiB() << " "
		<< std::setprecision(4) << Mantikore.Creature::VratiM() << " \n";
	return izlaz;
}