#ifndef infoBR_hpp
#define infoBR_hpp
#include <iostream>
using namespace std;

class Candidato{
public:
	Candidato(int linha);
	char cargo[4096], *nomeUrna, *nomeCandidato, *partido, *lema;
	long int *numeroUrna;
};
#endif
