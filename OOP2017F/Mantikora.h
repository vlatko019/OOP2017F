#pragma once
#include "Creature.h"
#include <iostream>
class Mantikora : public Creature {
private:
	double I;	//Intenzitet crvene boje
	double K;	//Simetrija rogova
	double O;	//Stepen efikasnosti rogova
	double U;	//Efektivna snaga ugriza

public:
	Mantikora();
	void PromeniMantikora(char* Ime, double I, double K, double O, double U);
	~Mantikora();
	friend std::ostream& operator<<(std::ostream& izlaz, Mantikora& Mantikore);
};

