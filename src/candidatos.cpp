#include "candidatos.hpp"
#include <stdio.h>
#include <string>

Candidato::Candidato(){
}
Candidato::~Candidato(){
}
int Candidato::size(FILE *info){ //retorna a quantidade de caracteres que serão lidos;
	fgetc(info);
	int inicio, fim, tamanho;
	inicio = ftell(info);
	while(fgetc(info)!='"');
	fim = ftell(info);
	tamanho = fim-inicio;
	fseek(info, inicio, SEEK_SET);
	return tamanho;
}
void Candidato::imprimir_dados(){
	cout<<cargo<<endl;
	cout<<numeroUrna<<endl;
	cout<<nomeCandidato<<endl;
	cout<<partido<<endl;
	cout<<lema<<endl;
};