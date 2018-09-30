#ifndef eleitores_hpp
#define eleitores_hpp
#include <iostream>
#include <iostream>
#include <string.h>
#include <urna.hpp>

using namespace std;
class Eleitor: public Urna{
	private:
		string nome, votoPresidente, votoGovernador, votoSenador, votoEstadual, votoDistrital;
	public:
		Eleitor();
		~Eleitor();
		void registro(char nome[43]); //método herdado e sobrecarregado
		string get_nome();
		void voto(char cargo[43], char voto[6]);

		void set_votoPresidente(const char *votoX);
		void set_votoGovernador(const char *votoX);
		void set_votoSenador(const char *votoX);
		void set_votoFederal(const char *votoX);
		void set_votoDistrital(const char *votoX);

		string get_votoPresidente();
		string get_votoGovernador();
		string get_votoSenador();
		string get_votoFederal();
		string get_votoDistrital();

		void resultado();

};

#endif