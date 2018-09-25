#ifndef candidatos_hpp
#define candidatos_hpp
#include <iostream>
using namespace std;

class Candidato{//classe que armazenará todas as informações de cada candidato
private:
	short qtd;
	int votos = 0, numeroUrna;
	string cargo, nomeCandidato, partido, lema/*, numeroUrna*/;
public:
	Candidato(); //Método Construtor
	~Candidato(); //Método Destrutor
	void registro_candidatos(FILE *info, int linhas);	
	void imprimir_dados();
	int size(FILE *info);

	//getters and setters
	void set_cargo(char cargo[43]);
	string  get_cargo();
	void set_nomeCandidato(char nomeCandidato[43]);
	string get_nomeCandidato();
	void set_partido(char partido[43]);
	string get_partido();
	void set_lema(char lema[43]);
	string get_lema();
	void set_numeroUrna(int numeroUrna);
	int get_numeroUrna();
	void set_votos();
	int get_votos();
	};										
																				
#endif