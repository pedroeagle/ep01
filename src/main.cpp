#include <candidatos.hpp>
#include <eleitores.hpp>
#include <urna.hpp>
#include <cstdio>
#include <string>
#include <stdlib.h>
using namespace std;
int main(){
	Urna urna;
	urna.leitura_de_dadosBR("data/consulta_cand_2018_BR.csv");
	urna.leitura_de_dadosDF("data/consulta_cand_2018_DF.csv");
	while(1){
		int n;
		system("clear");
		cout<<"Mesário, por favor, digite a quantidade de eleitores e pressione ENTER:"<<endl;
		cin>>n;
		getchar();
		system("clear");
		char aux[43];
		int voto;
		bool check = 1;
		Eleitor *eleitor[1000];
		for(int i = 0; i < n; i++){
			eleitor[i] = new Eleitor();
			cout<<"Mesário, por favor, digite o nome do eleitor e pressione ENTER:"<<endl;
			fgets(aux, 42, stdin);
			system("clear");
			eleitor[i]->set_nome(aux);
			cout<<"                         		ELEIÇÕES - 2018"<<endl;
			cout<<"Instruções para votação:\n"<<endl;
			cout<<"- Fique atento ao cargo a qual estará votando em cada passo.\n"<<endl;
			cout<<"- O número entre parentêses é referente a quantidade de digitos que devem ser digitados.\n"<<endl;
			cout<<"- Nunca digite o nome ou partido do candidato. Apenas os digitos referentes ao cargo e candidato.\n"<<endl;
			cout<<"- Excepcionalmente para votos brancos digite: BRANCO para votar branco.\n"<<endl;
			cout<<"- Para votar nulo digite a quantidade de zeros que estarão entre parênteses ao lado do cargo\n"<<endl;
			cout<<"- Após digitar o número do candidato informações sobre o mesmo serão mostradas. Digite C para confirmar e X para corrigir.\n"<<endl;
			cout<<"\n 				Pressione ENTER para continuar.\n"<<endl;
			getchar();
			system("clear");
			while(check){
				cout<<"SEU VOTO PARA"<<endl;
				cout<<"			DEPUTADO DISTRITAL (5 dígitos)"<<endl;
				cout<<"NÚMERO: ";
				cin>>voto;
				getchar();
				check = urna.votacaoDF("DEPUTADO DISTRITAL", voto);
			}
			check = 1;
			while(check){
				cout<<"SEU VOTO PARA"<<endl;
				cout<<"			DEPUTADO FEDERAL (4 dígitos)"<<endl;
				cout<<"NÚMERO: ";
				cin>>voto;
				getchar();
				check = urna.votacaoDF("DEPUTADO FEDERAL", voto);
			}
			check = 1;
			while(check){
				cout<<"SEU VOTO PARA"<<endl;
				cout<<"			SENADOR (3 dígitos)"<<endl;
				cout<<"NÚMERO: ";
				cin>>voto;
				getchar();
				check = urna.votacaoDF("SENADOR", voto);
			}
			check = 1;
			while(check){
				cout<<"SEU VOTO PARA"<<endl;
				cout<<"			GOVERNADOR (2 dígitos)"<<endl;
				cout<<"NÚMERO: ";
				cin>>voto;
				getchar();
				check = urna.votacaoDF("GOVERNADOR", voto);
			}
			check = 1;
			while(check){
				cout<<"SEU VOTO PARA"<<endl;
				cout<<"			PRESIDENTE (2 dígitos)"<<endl;
				cout<<"NÚMERO: ";
				cin>>voto;
				getchar();
				check = urna.votacaoBR("PRESIDENTE", voto);
			}
			system("clear");	
		}
		break;
	}

return 0;
}
