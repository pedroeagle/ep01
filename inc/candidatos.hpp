#ifndef candidatos_hpp
#define candidatos_hpp
#include <urna.hpp>
#include <cstdio>
#include <iostream>

using namespace std;

class Candidato: public Urna{//classe que armazenará todas as informações de cada candidato
private:
	short qtd;
	int votos;
	string cargo, nomeCandidato, partido, lema, nm_ue, numeroUrna;
public:
	Candidato(); //Método Construtor
	~Candidato(); //Método Destrutor
	void registro(FILE *info); //método herdado e sobrecarregado
	void imprimir_dados();
	void imprimir_dados_SV();
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
	void set_numeroUrna(char numeroUrna[5]);
	string get_numeroUrna();
	void set_votos();
	int get_votos();
	void set_nm_ue(char nm_ue[18]);
	string get_nm_ue();
	};							
																				
#endif