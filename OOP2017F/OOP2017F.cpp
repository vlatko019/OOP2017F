#include "Azdaja.h"
#include "BeliZec.h"
#include "Creature.h"
#include "Mantikora.h"
#include <iostream>

void sort(double* tmp) {

	for (int i = 0; i < 20; i++) {
		for (int j = i + 1; j < 21; j++) {
			if (tmp[i] > tmp[j]) {
				double temp = tmp[i];
				tmp[i] = tmp[j];
				tmp[j] = temp;
			}
		}
	}
}

void stampa(Azdaja* Azdaje, Mantikora* Mantikore, BeliZec* BeliZecevi, double* tmp) {
	//Brojaci za Azdaje, Mantikore i BeleZeceve
	int BA = 0;
	int BM = 0;
	int BB = 0; 
	
	for (int i = 0; i < 21; i++) {
		if ((Azdaje[BA].VratiB() == tmp[i]) && (BA < 7)) {
			std::cout 
					<< i + 1
					<< ".----------\n"
					<< "Azdaja "
					<< BA + 1
					//<< Azdaje[A].DajIme()
					<< std::endl
					<< Azdaje[BA] 
					<< std::endl;
			BA++;
		}
		else if ((Mantikore[BM].VratiB() == tmp[i]) && (BM < 7)) {
			std::cout 
					<< i + 1
					<< ".----------\n"
					<< "Mantikora "
					<< BM + 1
					//<< Mantikore[M].DajIme()
					<< std::endl
					<< Mantikore[BM]
					<< std::endl;
			BM++;
		}
		else if ((BeliZecevi[BB].VratiB() == tmp[i]) && (BB < 7)) {
			std::cout 
					<< i + 1
					<< ".----------\n"
					<< "Beli Zec "
					<< BB + 1
					//<< BeliZecevi[B].DajIme()
					<< std::endl
					<< BeliZecevi[BB]
					<< std::endl;
			BB++;
		}
	}
}

int main()
{
	Azdaja Azdaje[7];
	BeliZec BeliZecevi[7];
	Mantikora Mantikore[7];
	
	//Unosenje neprijatelja
	for (int i = 0; i < 21; i++) {
		if (i < 7) {
			char Ime[30];
			double S;	//Sjajnost krljusti
			double K;	//Simetrija krila
			double T;	//Temperatura vatre
			double U;	//Snaga udarca

			std::cin >> Ime
					 >> S
					 >> K
					 >> T
					 >> U;

			Azdaje[i].PromeniAzdaja(Ime, S, K, T, U);
		}
		else if (i < 14) {
			char Ime[30];
			double I;	//Intenzitet crvene boje
			double K;	//Simetrija rogova
			double O;	//Stepen efikasnosti rogova
			double U;	//Efektivna snaga ugriza

			std::cin >> Ime
					 >> I
					 >> K
					 >> O
					 >> U;

			Mantikore[i - 7].PromeniMantikora(Ime, I, K, O, U);
		}
		else if (i < 21) {
			char Ime[30];
			double C;	//Intenzitet bele boje
			double W;	//Wakizashi Skill Level

			std::cin >> Ime
					 >> C
					 >> W;

			BeliZecevi[i - 14].PromeniBeliZec(Ime, C, W);
		}

	}
	//Kraj unosenja neprijatelja

	double tmp[21];

	for (int i = 0; i < 21; i++) {
		if (i < 7) {
			tmp[i] = Azdaje[i].VratiB();
		}

		if (i < 14) {
			tmp[i] = Mantikore[i - 7].VratiB();
		}

		if (i < 21) {
			tmp[i] = BeliZecevi[i - 14].VratiB();
		}

	}

	//sortira po B
	sort(tmp);	

	//Stampa po B
	std::cout << "Sortirano po B\n";
	//f-ja za stampanje
	stampa(Azdaje, Mantikore, BeliZecevi, tmp);
	//end

	for (int i = 0; i < 21; i++) {
		if (i < 7) {
			tmp[i] = Azdaje[i].VratiM();
		}

		if (i < 14) {
			tmp[i] = Mantikore[i - 7].VratiM();
		}

		if (i < 21) {
			tmp[i] = BeliZecevi[i - 14].VratiM();
		}

	}

	//Sortira po M
	sort(tmp);	

	//Stampa po M
	std::cout << "Sortirano po M\n";
	//f-ja za stampanje
	stampa(Azdaje, Mantikore, BeliZecevi, tmp);
	//end
	std::cin >> tmp[0];
    return 0;
}

