#include "candidatosDF.hpp"
FILE *infoDF = fopen("../info_csv/DF.csv", "r");
void CandidatoDF::registro_candidatos(){
	while(fgetc(infoDF)!='\n');
	int i = 0;
	while(i < 32){
		if(i == 14){
			qtd = Candidato::size(infoDF);
			fgets(cargo, qtd, infoDF);
		}
		if(i==16){
			qtd = Candidato::size(infoDF);
			fgets(numeroUrna, qtd, infoDF);
		}
		if(i == 17){
			qtd = Candidato::size(infoDF);
			fgets(nomeCandidato, qtd, infoDF);
		}
		if(i == 29){
			qtd = Candidato::size(infoDF);
			fgets(partido, qtd, infoDF);
		}
		if(i == 31){
			qtd = Candidato::size(infoDF);
			fgets(lema, qtd, infoDF);
		}
		while(fgetc(infoDF)!=';');
		i++;
	}
};
