#ifndef urna_hpp
#define urna_hpp
#include <string>
#include <candidatos.hpp>
using namespace std;
class Urna{
private:
	int branco[5], nulo[5];
public:
	int votacaoBR(const string cargo, const int voto);
	int votacaoDF(const string cargo, const int voto);
	void leitura_de_dadosBR(const char *path);
	void leitura_de_dadosDF(const char *path);
	int resultado();
};


#endif