#include "infoBR.hpp"
#include "infoDF.hpp"
#include <vector>
using namespace std;
int main(int argc, char **argv){
	Candidato *candidato[26];
	for(int i = 0; i <= 25; i++){
		candidato[i] = new Candidato();
		candidato[i]->imprimir_dados();
	}

return 0;
}
