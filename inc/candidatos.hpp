#ifndef candidatos_hpp
#define candidatos_hpp
#include <urna.hpp>
#include <iostream>
using namespace std;

class Candidato{//classe que armazenará todas as informações de cada candidato
private:
	short qtd;
	int votos, numeroUrna;
	string cargo, nomeCandidato, partido, lema, nm_ue;
public:
	Candidato(); //Método Construtor
	~Candidato(); //Método Destrutor
	void registro_candidatos(FILE *info);	
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
	void set_nm_ue(char nm_ue[18]);
	string get_nm_ue();
	};										
																				
#endif