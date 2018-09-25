#include <cstring>
#include <urna.hpp>
using namespace std;
Candidato *candidatosDF[1237];
Candidato *candidatosBR[26];
void Urna::leitura_de_dadosBR(const char *path){
	FILE *info = fopen(path, "r");
	if(info == NULL){
		cout<<"Falha na leitura do arquivo '"<<path<<"'"<<endl;
	}
	
	for(int i = 0; i <= 25; i++){
		candidatosBR[i] = new Candidato();
		candidatosBR[i]->registro_candidatos(info, 26);
	}
}
void Urna::leitura_de_dadosDF(const char *path){
	FILE *info = fopen(path, "r");
	if(info == NULL){
		cout<<"Falha na leitura do arquivo '"<<path<<"'"<<endl;
	}
	
	for(int i = 0; i <= 1236; i++){
		candidatosDF[i] = new Candidato();
		candidatosDF[i]->registro_candidatos(info, 1237);
	}
}
int Urna::votacaoDF(const string cargo, const int voto){
	for(int i = 0; i <= 1236; i++){
		if(cargo == candidatosDF[i]->get_cargo() && voto == candidatosDF[i]->get_numeroUrna()){
			candidatosDF[i]->set_votos();
			candidatosDF[i]->imprimir_dados();
			return 0;
		}
	}
	return 1;
}