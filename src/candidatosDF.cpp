#include "candidatosDF.hpp"

/*void CandidatoDF::registro_candidatos(){
	while(fgetc(infoDF)!='\n');
	char aux[43];
	int i = 0;
	while(i < 32){
		if(i == 14){
			qtd = Candidato::size(infoDF);
			fgets(aux, qtd, infoDF);
			Candidato::set_cargo(aux);
		}
		if(i==16){
			qtd = Candidato::size(infoDF);
			fgets(aux, qtd, infoDF);
			Candidato::set_numeroUrna(aux);
		}
		if(i == 17){
			qtd = Candidato::size(infoDF);
			fgets(aux, qtd, infoDF);
			Candidato::set_nomeCandidato(aux);
		}
		if(i == 29){
			qtd = Candidato::size(infoDF);
			fgets(aux, qtd, infoDF);
			Candidato::set_partido(aux);
		}
		if(i == 31){
			qtd = Candidato::size(infoDF);
			fgets(aux, qtd, infoDF);
			Candidato::set_lema(aux);
		}
		while(fgetc(infoDF)!=';');
		i++;
	}
};*/
