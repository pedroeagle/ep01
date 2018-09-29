#ifndef urna_hpp
#define urna_hpp
#include <string>
#include <cstdio>
#include <string.h>
#include <stdlib.h>

using namespace std;
class Urna{
private:
	int branco[5], nulo[5];
	string nome;
public:

	int votacaoBR(const string cargo, const char *votoX);
	int votacaoDF(const string cargo, const char *votoX);
	void leitura_de_dadosBR(const char *path);
	void leitura_de_dadosDF(const char *path);
	int resultado();
};


#endif