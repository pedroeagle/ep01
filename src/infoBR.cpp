#include "infoBR.hpp"
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

Candidato::Candidato(int linha){
	cargo = "0";
	FILE *info = fopen("../info_csv/BR.csv", "r");
	int i = 0;
	while(i < linha-1){
		while(fgetc(info)!='\n');
		i++;
	}
	i = 0;
	while(i < 14){
		while(fgetc(info)!=';');
		i++;
	}


	fgetc(info);
	int inicio, fim, tamanho;
	inicio = ftell(info);
	while(fgetc(info)!='"');
	fim = ftell(info);
	tamanho = fim-inicio+1;
	fseek(info, inicio, SEEK_SET);
	fgets(cargo, tamanho, info);
	cout<<cargo<<endl;
}
string Candidato::get_cargo(){
	return cargo;
}
