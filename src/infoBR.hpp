#ifndef infoBR_hpp
#define infoBR_hpp
#include <iostream>
using namespace std;

class Candidato{
public:
	Candidato(int linha);
	string cargo, *nomeUrna, *nomeCandidato, *partido, *lema;
	long int *numeroUrna;
	string get_cargo();
};

#endif
