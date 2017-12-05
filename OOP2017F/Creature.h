#pragma once

class Creature {
private:
	char* Ime;	//Ime 
	double B;	//Koeficijent borbene sposobnosti
	double M;	//Koeficijent magicne privlacnosti

public:
	Creature();
	Creature(char* Ime, double B, double M);
	~Creature();
	inline double VratiB() { return B; };
	inline double VratiM() { return M; };

};

