#ifndef infoBR_hpp
#define infoBR_hpp
#include <iostream>
using namespace std;

class Candidato{
	public:
	char *cargo, *nomeUrna, *nomeCandidato, *partido, *lema;
	long int *numeroUrna;
	char get_cargo(int linha);
	Candidato(int linha);
};

#endif
