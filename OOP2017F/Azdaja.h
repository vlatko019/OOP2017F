#pragma once
#include "Creature.h"
#include <iostream>
class Azdaja : public Creature {
private:
	double S;	//Sjajnost krljusti
	double K;	//Simetrija krila
	double T;	//Temperatura vatre
	double U;	//Snaga udarca

public:
	Azdaja();
	void PromeniAzdaja(char* Ime, double S, double K, double T, double U);
	~Azdaja();
	friend std::ostream& operator<<(std::ostream& izlaz, Azdaja& Azdaje);
};

