#ifndef urna_hpp
#define urna_hpp
#include <string>
#include <cstdio>
#include <string.h>
#include <stdlib.h>

using namespace std;
class Urna{
private:
	int branco[5], nulo[5], eleitores;
	string nome;
public:
	virtual void registro();
	Urna();
	~Urna();
	void leitura_de_dadosBR(const char *path);
	void leitura_de_dadosDF(const char *path);
	int votacaoBR(const string cargo, const char *votoX);
	int votacaoDF(const string cargo, const char *votoX);
	void set_eleitores(int qtd);
	int get_eleitores();
	virtual void resultado();
	
};


#endif