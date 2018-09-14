#include "candidatosBR.hpp"
#include "candidatosDF.hpp"
using namespace std;
int main(int argc, char **argv){
	CandidatoBR *candidatosBR[26];
	for(int i = 0; i <= 25; i++){
		candidatosBR[i] = new CandidatoBR();
		candidatosBR[i]->registro_candidatos();
		candidatosBR[i]->imprimir_dados();
	}

return 0;
}
