#ifndef candidatos_hpp
#define candidatos_hpp
#include <iostream>
using namespace std;

class Candidato{
public:
	char cargo[100], nomeCandidato[100], partido[100], lema[100], numeroUrna[6];
	Candidato(); //Método Construtor
	~Candidato(); //Método Destrutor
	void virtual registro_candidatos() = 0;
	void imprimir_dados();
};
#endif