#include "infoBR.hpp"
#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
FILE *info = fopen("../info_csv/BR.csv", "r");
int size(){
	fgetc(info);
	int inicio, fim, tamanho;
	inicio = ftell(info);
	while(fgetc(info)!='"');
	fim = ftell(info);
	tamanho = fim-inicio;
	fseek(info, inicio, SEEK_SET);
	return tamanho;
}
Candidato::Candidato(){
		while(fgetc(info)!='\n');
	int i = 0;
	while(i < 32){
		if(i == 14){
			fgets(cargo, size(), info);
		}
		if(i==16){
			fgets(numeroUrna, size(), info);
		}
		if(i == 17){
			fgets(nomeCandidato, size(), info);
		}
		if(i == 29){
			fgets(partido, size(), info);
		}
		if(i == 31){
			fgets(lema, size(), info);
		}
		while(fgetc(info)!=';');
		i++;
	}
};
void Candidato::imprimir_dados(){
	cout<<cargo<<endl;
	cout<<numeroUrna<<endl;
	cout<<nomeCandidato<<endl;
	cout<<partido<<endl;
	cout<<lema<<endl;
};
