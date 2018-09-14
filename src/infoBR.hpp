#ifndef infoBR_hpp
#define infoBR_hpp
#include <iostream>
using namespace std;

class Candidato{
private:
	char cargo[100], nomeCandidato[100], partido[100], lema[100], numeroUrna[3];
public:
	Candidato(); //Método Construtor
	void imprimir_dados();
};

#endif
