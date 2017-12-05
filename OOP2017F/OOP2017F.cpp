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
	for (int i = 0; i < 21; i++) {
		//Brojaci za Azdaje, Mantikore i BeleZeceve
		int A = 0;
		int M = 0;
		int B = 0;

		if (Azdaje[A].VratiB() == tmp[i]) {
			std::cout << Azdaje[A];
			A++;
		}
		else if (Mantikore[M].VratiB() == tmp[i]) {
			std::cout << Mantikore[M];
			M++;
		}
		else if (BeliZecevi[B].VratiB() == tmp[i]) {
			std::cout << BeliZecevi[B];
			B++;
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

		if (i < 14) {
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

		if (i < 21) {
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
	//f-ja za stampanje
	stampa(Azdaje, Mantikore, BeliZecevi, tmp);
	//end

    return 0;
}

