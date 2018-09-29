#include <cstring>
#include <stdio.h>
#include <urna.hpp>
#include <cstdio>
#include <string.h>
#include <stdlib.h>
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
		candidatosBR[i]->registro_candidatos(info);
	}
}
void Urna::leitura_de_dadosDF(const char *path){
	FILE *info = fopen(path, "r");
	if(info == NULL){
		cout<<"Falha na leitura do arquivo '"<<path<<"'"<<endl;
	}
	
	for(int i = 0; i <= 1236; i++){
		candidatosDF[i] = new Candidato();
		candidatosDF[i]->registro_candidatos(info);
	}
}
int Urna::votacaoDF(const string cargo, const int voto){
	char aux;
	for(int i = 0; i <= 1236; i++){
		if(cargo == candidatosDF[i]->get_cargo() && voto == candidatosDF[i]->get_numeroUrna()){
			candidatosDF[i]->set_votos();
			candidatosDF[i]->imprimir_dados();
			cout<<endl;
			cout<<endl;
			cout<<"Pressione C para confirmar e X para corrigir. Logo após pressione ENTER.\n"<<endl;
			while(1){
				aux = toupper(getchar());
				getchar();
				if(aux == 'X'){
					system("clear");
					return 1;
				}
				else if(aux == 'C'){
					system("clear");
					return 0;
				}
			}
		}

	}	
			system("clear");
			cout<<"Candidato não encontrado. Tente novamente."<<endl;
	return 1;
}	
int Urna::votacaoBR(const string cargo, const int voto){
	char aux;
	for(int i = 0; i <= 25; i++){
		if(cargo == candidatosBR[i]->get_cargo() && voto == candidatosBR[i]->get_numeroUrna()){
			candidatosBR[i]->set_votos();
			candidatosBR[i]->imprimir_dados();
			cout<<endl;
			cout<<endl;
			cout<<"Pressione C para confirmar e X para corrigir. Logo após pressione ENTER.\n"<<endl;
			while(1){
				aux = toupper(getchar());
				getchar();
				if(aux == 'X'){
					system("clear");
					return 1;
				}
				else if(aux == 'C'){
					system("clear");
					return 0;
				}
			}
		}

	}	
			system("clear");
			cout<<"Candidato não encontrado. Tente novamente."<<endl;
	return 1;
}
int Urna::resultado(){
	cout<<"Mesário, pressione R e logo após, ENTER, para visualizar e finalizar a seção."<<endl;
	cout<<"Pressione X e logo após, ENTER, para finalizar a secão sem visualizar o resultado."<<endl;
	char aux;
	while(1){
		aux = toupper(getchar());
		getchar();
		if(aux == 'X'){
			system("clear");
			return 0;
		}
		else if(aux == 'R'){
			system("clear");
			return 1;
		}
	}
}