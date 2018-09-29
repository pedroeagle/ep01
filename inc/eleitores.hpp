#ifndef eleitores_hpp
#define eleitores_hpp
#include <iostream>
#include <iostream>
#include <string.h>

using namespace std;
class Eleitor{
	private:
		string nome, votoPresidente, votoGovernador, votoSenador, votoEstadual, votoDistrital;
	public:
		Eleitor();
		~Eleitor();
		void set_nome(char nome[43]);
		string get_nome();
		void voto(char cargo[43], char voto[6]);
};

#endif