#include <candidatos.hpp>
#include <cstdio>
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
void Candidato::registro_candidatos(FILE *info, int linhas){
	/*if(info == NULL){
		throw(1);
	}*/
	while(fgetc(info)!='\n');
	char aux[43];
	int n;
	int i = 0;
	while(i < 32){
		if(i == 14){
			qtd = Candidato::size(info);
			fgets(aux, qtd, info);
			Candidato::set_cargo(aux);
		}
		if(i==16){
			qtd = Candidato::size(info);
			fscanf(info, "%d", &n);
			//fgets(aux, qtd, info);
			Candidato::set_numeroUrna(n);
		}
		if(i == 17){
			qtd = Candidato::size(info);
			fgets(aux, qtd, info);
			Candidato::set_nomeCandidato(aux);
		}
		if(i == 29){
			qtd = Candidato::size(info);
			fgets(aux, qtd, info);
			Candidato::set_partido(aux);
		}
		if(i == 31){
			qtd = Candidato::size(info);
			fgets(aux, qtd, info);
			Candidato::set_lema(aux);
		}
		while(fgetc(info)!=';');
		i++;
	}
}
void Candidato::imprimir_dados(){
	cout<<cargo<<endl;
	cout<<numeroUrna<<endl;
	cout<<nomeCandidato<<endl;
	cout<<partido<<endl;
	cout<<lema<<endl;
	cout<<votos<<endl;
}


void Candidato::set_cargo(char cargo[43]){
	this->cargo = cargo;
}
string Candidato::get_cargo(){
	return cargo;
}


void Candidato::set_nomeCandidato(char nomeCandidato[43]){
	this->nomeCandidato = nomeCandidato;
}
string Candidato::get_nomeCandidato(){
	return nomeCandidato;
}


void Candidato::set_partido(char partidoIn[43]){
	this->partido = partidoIn;
}
string Candidato::get_partido(){
	return partido;
}


void Candidato::set_lema(char lemaIn[43]){
	this->lema = lemaIn;
}
string Candidato::get_lema(){
	return lema;
}


void Candidato::set_numeroUrna(int numeroUrna){
	this->numeroUrna = numeroUrna;
}
int Candidato::get_numeroUrna(){
	return numeroUrna;
}

void Candidato::set_votos(){
	votos++;
}
int Candidato::get_votos(){
	return votos;
}
