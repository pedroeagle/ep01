#include <candidatos.hpp>
#include <eleitores.hpp>
#include <urna.hpp>
#include <cstdio>
#include <string>
using namespace std;
int main(int argc, char **argv){
	Urna urna;
	urna.leitura_de_dadosBR("../data/consulta_cand_2018_BR.csv");
	urna.leitura_de_dadosDF("../data/consulta_cand_2018_DF.csv");
	while(1){
		int n;
		cout<<"Mesário, por favor digite a quantidade de eleitores e pressione ENTER:"<<endl;
		cin>>n;
		getchar();
		char aux[43];
		int voto;
		Eleitor *eleitor[1000];
		for(int i = 0; i < n; i++){
			eleitor[i] = new Eleitor();
			cout<<"Eleitor, por favor, digite o seu nome e pressione ENTER:"<<endl;
			fgets(aux, 42, stdin);
			eleitor[i]->set_nome(aux);
			cout<<"SEU VOTO PARA"<<endl;
			cout<<"			DEPUTADO FEDERAL"<<endl;
			cout<<"NÚMERO: ";
			cin>>voto;
			getchar();
			urna.votacaoDF("DEPUTADO FEDERAL", voto);
		}
		break;
	}

return 0;
}
