#include <candidatos.hpp>
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
int Urna::votacaoDF(const string cargo, const char *votoX){
	char aux;
	char voto[8];
	if(votoX[0] >= 'A'){
		for(int j = 0; votoX[j]!='\0'; j++){
			voto[j] = toupper(votoX[j]);
		}
	}
	else{
		strcpy(voto, votoX);
	}
	for(int i = 0; i <= 1236; i++){
		//DEPUTADO DISTRITAL: BRANCOS E NULOS:
		if(cargo == "DEPUTADO DISTRITAL" && strcmp(voto, "00000") == 0){
			cout<<"Voto NULO.\n"<<endl;
			cout<<"Pressione C para confirmar e X para corrigir. Logo após pressione ENTER.\n"<<endl;
			while(1){
				aux = toupper(getchar());
				getchar();
				if(aux == 'X'){
					system("clear");
					return 1;
				}
				else if(aux == 'C'){
					Urna::nulo[0]++;
					system("clear");
					return 0;
				}
			}
		}
		else if(cargo == "DEPUTADO DISTRITAL" && strcmp(voto, "BRANCO") == 0 ){
			cout<<"Voto BRANCO.\n"<<endl;
			cout<<"Pressione C para confirmar e X para corrigir. Logo após pressione ENTER.\n"<<endl;
			while(1){
				aux = toupper(getchar());
				getchar();
				if(aux == 'X'){
					system("clear");
					return 1;
				}
				else if(aux == 'C'){
					Urna::branco[0]++;
					system("clear");
					return 0;
				}
			}
		}

		//DEPUTADO FEDERAL: BRANCOS E NULOS
		else if(cargo == "DEPUTADO FEDERAL" && strcmp(voto, "0000") == 0){
			cout<<"Voto NULO.\n"<<endl;
			cout<<"Pressione C para confirmar e X para corrigir. Logo após pressione ENTER.\n"<<endl;
			while(1){
				aux = toupper(getchar());
				getchar();
				if(aux == 'X'){
					system("clear");
					return 1;
				}
				else if(aux == 'C'){
					Urna::nulo[1]++;
					system("clear");
					return 0;
				}
			}
		}
		else if(cargo == "DEPUTADO FEDERAL" && strcmp(voto, "BRANCO") == 0){
			cout<<"Voto BRANCO.\n"<<endl;
			cout<<"Pressione C para confirmar e X para corrigir. Logo após pressione ENTER.\n"<<endl;
			while(1){
				aux = toupper(getchar());
				getchar();
				if(aux == 'X'){
					system("clear");
					return 1;
				}
				else if(aux == 'C'){
					Urna::branco[1]++;
					system("clear");
					return 0;
				}
			}
		}

		//SENADOR: BRANCOS E NULOS
		else if(cargo == "SENADOR" && strcmp(voto, "000") == 0){
			cout<<"Voto NULO.\n"<<endl;
			cout<<"Pressione C para confirmar e X para corrigir. Logo após pressione ENTER.\n"<<endl;
			while(1){
				aux = toupper(getchar());
				getchar();
				if(aux == 'X'){
					system("clear");
					return 1;
				}
				else if(aux == 'C'){
					Urna::nulo[2]++;
					system("clear");
					return 0;
				}
			}
		}
		else if(cargo == "SENADOR" && strcmp(voto, "BRANCO") == 0){
			cout<<"Voto BRANCO.\n"<<endl;
			cout<<"Pressione C para confirmar e X para corrigir. Logo após pressione ENTER.\n"<<endl;
			while(1){
				aux = toupper(getchar());
				getchar();
				if(aux == 'X'){
					system("clear");
					return 1;
				}
				else if(aux == 'C'){
					Urna::branco[2]++;
					system("clear");
					return 0;
				}
			}
		}

		//GOVERNADOR: BRANCOS E NULOS
		else if(cargo == "GOVERNADOR" && strcmp(voto, "00") == 0){
			cout<<"Voto NULO.\n"<<endl;
			cout<<"Pressione C para confirmar e X para corrigir. Logo após pressione ENTER.\n"<<endl;
			while(1){
				aux = toupper(getchar());
				getchar();
				if(aux == 'X'){
					system("clear");
					return 1;
				}
				else if(aux == 'C'){
					Urna::nulo[3]++;
					system("clear");
					return 0;
				}
			}
		}
		else if(cargo == "GOVERNADOR" && strcmp(voto, "BRANCO") == 0){
			cout<<"Voto BRANCO.\n"<<endl;
			cout<<"Pressione C para confirmar e X para corrigir. Logo após pressione ENTER.\n"<<endl;
			while(1){
				aux = toupper(getchar());
				getchar();
				if(aux == 'X'){
					system("clear");
					return 1;
				}
				else if(aux == 'C'){
					Urna::branco[3]++;
					system("clear");
					return 0;
				}
			}
		}
		else if(cargo == candidatosDF[i]->get_cargo() && voto == candidatosDF[i]->get_numeroUrna()){
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
					candidatosDF[i]->set_votos();
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
int Urna::votacaoBR(const string cargo, const char *votoX){
	char aux;
	char voto[8];
	if(votoX[0] >= 'A'){
		for(int j = 0; votoX[j]!='\0'; j++){
			voto[j] = toupper(votoX[j]);
		}
	}
	else{
		strcpy(voto, votoX);
	}
	for(int i = 0; i <= 25; i++){
		if(cargo == "PRESIDENTE" && strcmp(voto, "00") == 0){
			cout<<"Voto NULO.\n"<<endl;
			cout<<"Pressione C para confirmar e X para corrigir. Logo após pressione ENTER.\n"<<endl;
			while(1){
				aux = toupper(getchar());
				getchar();
				if(aux == 'X'){
					system("clear");
					return 1;
				}
				else if(aux == 'C'){
					Urna::nulo[4]++;
					system("clear");
					return 0;
				}
			}
		}
		else if(cargo == "PRESIDENTE" && strcmp(voto, "BRANCO") == 0){
			cout<<"Voto BRANCO.\n"<<endl;
			cout<<"Pressione C para confirmar e X para corrigir. Logo após pressione ENTER.\n"<<endl;
			while(1){
				aux = toupper(getchar());
				getchar();
				if(aux == 'X'){
					system("clear");
					return 1;
				}
				else if(aux == 'C'){
					Urna::branco[4]++;
					system("clear");
					return 0;
				}
			}
		}
		else if(cargo == candidatosBR[i]->get_cargo() && voto == candidatosBR[i]->get_numeroUrna()){
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
					candidatosBR[i]->set_votos();
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
	cout<<"Pressione X e logo após, ENTER, para finalizar a seção sem visualizar o resultado."<<endl;
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