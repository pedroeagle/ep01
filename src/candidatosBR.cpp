#include "candidatosBR.hpp"
#include <stdio.h>
#include <string>
#include <iostream>

FILE *infoBR = fopen("../info_csv/BR.csv", "r");
void CandidatoBR::registro_candidatos(){
	while(fgetc(infoBR)!='\n');
	int i = 0;
	while(i < 32){
		if(i == 14){
			qtd = Candidato::size(infoBR);
			fgets(cargo, qtd, infoBR);
		}
		if(i==16){
			qtd = Candidato::size(infoBR);
			fgets(numeroUrna, qtd, infoBR);
		}
		if(i == 17){
			qtd = Candidato::size(infoBR);
			fgets(nomeCandidato, qtd, infoBR);
		}
		if(i == 29){
			qtd = Candidato::size(infoBR);
			fgets(partido, qtd, infoBR);
		}
		if(i == 31){
			qtd = Candidato::size(infoBR);
			fgets(lema, qtd, infoBR);
		}
		while(fgetc(infoBR)!=';');
		i++;
	}

};