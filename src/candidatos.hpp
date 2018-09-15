#ifndef candidatos_hpp
#define candidatos_hpp
#include <iostream>
using namespace std;

class Candidato{//classe que armazenará todas as informações de cada candidato
public:
	char cargo[43], nomeCandidato[43], partido[43], lema[43], numeroUrna[6]; //variáveis que armazenarão as informações dos candidatos
	short qtd;
	Candidato(); //Método Construtor
	~Candidato(); //Método Destrutor
	void virtual registro_candidatos() = 0; //método virtual de registro dos candidatos. candidatos BR utilizam arquivo					
	void imprimir_dados();					//diferente dos candidatos DF
	int size(FILE *info);					//função size que retorna a quantidade de caracteres que serão lidos
	};										//com a função fgets; pretendo utilizar essa função para fazer alocação de
											//memória										
#endif