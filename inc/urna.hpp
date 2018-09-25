#ifndef urna_hpp
#define urna_hpp
#include <string>
#include <candidatos.hpp>
using namespace std;
class Urna{
public:
	void votacaoBR(const char *cargo, const char voto[43]);
	int votacaoDF(const string cargo, const int voto);
	void leitura_de_dadosBR(const char *path);
	void leitura_de_dadosDF(const char *path);
};


#endif