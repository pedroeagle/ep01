#include "candidatosBR.hpp"
#include "candidatosDF.hpp"
using namespace std;
int main(int argc, char **argv){
	int maior = 0;
	CandidatoBR *candidatosBR[26];
	for(int i = 0; i <= 25; i++){
		candidatosBR[i] = new CandidatoBR();
		candidatosBR[i]->registro_candidatos();
	}
	CandidatoDF *candidatosDF[1237];
	for(int i = 0; i <= 1236; i++){
		candidatosDF[i] = new CandidatoDF();
		candidatosDF[i]->registro_candidatos();
	}
	

return 0;
}
