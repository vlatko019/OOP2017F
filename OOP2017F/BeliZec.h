#pragma once
#include "Creature.h"
#include <iostream>

class BeliZec : public Creature {
private:
	double C;	//Intenzitet bele boje
	double W;	//Wakizashi Skill Level

public:
	BeliZec();
	void PromeniBeliZec(char* Ime, double C, double W);
	~BeliZec();
	friend std::ostream& operator<<(std::ostream& izlaz, BeliZec& BeliZecevi);

};

