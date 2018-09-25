#ifndef eleitores_hpp
#define eleitores_hpp
#include <iostream>
using namespace std;
class Eleitor{
	private:
		string nome, votoPresidente, votoGovernador, votoSenador, votoEstadual, votoDistrital;
	public:
		Eleitor();
		~Eleitor();
		void set_nome(char nome[43]);
		string get_nome();
		void set_votoPresidente(char voto[6]);
		string get_votoPresidente();
		void set_votoGovernador(char voto[6]);
		string get_votoGovernador();
		void set_votoSenador(char voto[6]);
		string get_votoSenador();
		void set_votoEstadual(char voto[6]);
		string get_votoEstadual();
		void set_votoDistrital(char voto[6]);
		string get_votoDistrital();
		void voto(char cargo[43], char voto[6]);

};

#endif