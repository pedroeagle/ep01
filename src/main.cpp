#include <candidatos.hpp>
#include <eleitores.hpp>
#include <cstdio>
using namespace std;
int main(int argc, char **argv){
	FILE *infoBR = fopen("data/consulta_cand_2018_BR.csv", "r");
	if(infoBR == NULL){
		cout<<"Falha na leitura do arquivo 'data/consulta_cand_2018_BR.csv'."<<endl;
		return -1;
	}
	FILE *infoDF = fopen("data/consulta_cand_2018_DF.csv", "r");
	if(infoDF == NULL){
		cout<<"Falha na leitura do arquivo 'data/consulta_cand_2018_DF.csv'."<<endl;
		return -1;
	}
	Candidato *candidatosBR[26];
	for(int i = 0; i <= 25; i++){
		candidatosBR[i] = new Candidato();
		candidatosBR[i]->registro_candidatos(infoBR, 26);
	}
	Candidato *candidatosDF[1237];
	for(int i = 0; i <= 1236; i++){
		candidatosDF[i] = new Candidato();
		candidatosDF[i]->registro_candidatos(infoDF, 1237);
		//candidatosDF[i]->imprimir_dados();
	}

	while(1){
		int define;
		cout<<"Mesário, por favor digite a quantidade de eleitores e pressione ENTER:"<<endl;
		cin>>define;
		getchar();
		const int n = define;
		char aux[43];
		Eleitor *eleitor[n];
		for(int i = 0; i < n; i++){
			eleitor[i] = new Eleitor();
			cout<<"Eleitor, por favor, digite o seu nome e pressione ENTER:"<<endl;
			fgets(aux, 42, stdin);
			eleitor[i]->set_nome(aux);
			cout<<"SEU VOTO PARA"<<endl;
			cout<<"			DEPUTADO FEDERAL"<<endl;
			cout<<"NÚMERO: ";
		}

		break;
	}

return 0;
}
