#include "infoBR.hpp"
#include "infoDF.hpp"
using namespace std;
int main(int argc, char **argv){
	Candidato *candidatosBR[26];
	for(int i = 0; i <= 25; i++){
		candidatosBR[i] = new Candidato();
		candidatosBR[i]->imprimir_dados();
	}

return 0;
}
