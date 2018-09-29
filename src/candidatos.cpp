#include <candidatos.hpp>

using namespace std;
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
void Candidato::registro_candidatos(FILE *info){
	while(fgetc(info)!='\n');
	char aux[43];
	int i = 0;
	while(i < 32){
		if(i == 12){
			qtd = Candidato::size(info);
			fgets(aux, qtd, info);
			Candidato::set_nm_ue(aux);
		}
		if(i == 14){
			qtd = Candidato::size(info);
			fgets(aux, qtd, info);
			Candidato::set_cargo(aux);
		}
		if(i==16){
			qtd = Candidato::size(info);
			fgets(aux, qtd, info);
			Candidato::set_numeroUrna(aux);
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
		Candidato::votos = 0;
		while(fgetc(info)!=';');
		i++;
	}
}
void Candidato::imprimir_dados(){
	cout<<"Nome: "<<nomeCandidato<<endl;
	cout<<"Partido: "<<partido<<endl;
	cout<<"Lema: "<<lema<<endl;
	cout<<"Cargo: "<<cargo<<" do "<<nm_ue<<endl;	
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


void Candidato::set_numeroUrna(char numeroUrna[5]){
	this->numeroUrna = numeroUrna;
}
string Candidato::get_numeroUrna(){
	return numeroUrna;
}

void Candidato::set_votos(){
	votos++;
}
int Candidato::get_votos(){
	return votos;
}
void Candidato:: set_nm_ue(char nm_ue[18]){
	this->nm_ue = nm_ue;
}
string Candidato::get_nm_ue(){
	return nm_ue;
}