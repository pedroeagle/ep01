#ifndef eleitores_hpp
#define eleitores_hpp
#include <iostream>
#include <iostream>
#include <string.h>
#include <urna.hpp>

using namespace std;
class Eleitor: public Urna{
	protected:
		string nome, votoPresidente, votoGovernador, votoSenador1, votoSenador2, votoEstadual, votoDistrital;
	public:
		Eleitor();
		~Eleitor();
		void registro(char nome[43]); //método herdado e sobrecarregado
		string get_nome();
		void voto(char cargo[43], char voto[7]);

		void set_votoPresidente(const char *votoX);
		void set_votoGovernador(const char *votoX);
		void set_votoSenador1(const char *votoX);
		void set_votoSenador2(const char *votoX);
		void set_votoFederal(const char *votoX);
		void set_votoDistrital(const char *votoX);

		string get_votoPresidente();
		string get_votoGovernador();
		string get_votoSenador1();
		string get_votoSenador2();
		string get_votoFederal();
		string get_votoDistrital();
		
		void resultado();

};

#endif