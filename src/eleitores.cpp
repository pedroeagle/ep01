#include <eleitores.hpp>

using namespace std;
Eleitor::Eleitor(){
	Eleitor::votoSenador1 = "\0", Eleitor::votoSenador2 = "\0";
}
Eleitor::~Eleitor(){

}

void Eleitor::registro(char nome[43]){
	nome[strlen(nome)-1]='\0';
	this->nome = nome;
}
string Eleitor::get_nome(){
	return this->nome;
}

void Eleitor::set_votoPresidente(const char *votoX){
	char voto[8];
	if(votoX[0] >= 'A'){
		for(int j = 0; votoX[j]!='\0'; j++){
			voto[j] = toupper(votoX[j]);
		}
	}
	else{
		strcpy(voto, votoX);
	}
	votoPresidente = voto;
}
void Eleitor::set_votoGovernador(const char *votoX){
	char voto[8];
	if(votoX[0] >= 'A'){
		for(int j = 0; votoX[j]!='\0'; j++){
			voto[j] = toupper(votoX[j]);
		}
	}
	else{
		strcpy(voto, votoX);
	}
	votoGovernador = voto;
}
void Eleitor::set_votoSenador1(const char *votoX){
	char voto[8];
	if(votoX[0] >= 'A'){
		for(int j = 0; votoX[j]!='\0'; j++){
			voto[j] = toupper(votoX[j]);
		}
	}
	else{
		strcpy(voto, votoX);
	}
	votoSenador1 = voto;
}
void Eleitor::set_votoSenador2(const char *votoX){
	char voto[8];
	if(votoX[0] >= 'A'){
		for(int j = 0; votoX[j]!='\0'; j++){
			voto[j] = toupper(votoX[j]);
		}
	}
	else{
		strcpy(voto, votoX);
	}
	votoSenador2 = voto;
}
void Eleitor::set_votoFederal(const char *votoX){
	char voto[8];
	if(votoX[0] >= 'A'){
		for(int j = 0; votoX[j]!='\0'; j++){
			voto[j] = toupper(votoX[j]);
		}
	}
	else{
		strcpy(voto, votoX);
	}
	votoEstadual = voto;
}
void Eleitor::set_votoDistrital(const char *votoX){
	char voto[8];
	if(votoX[0] >= 'A'){
		for(int j = 0; votoX[j]!='\0'; j++){
			voto[j] = toupper(votoX[j]);
		}
	}
	else{
		strcpy(voto, votoX);
	}
	votoDistrital = voto;
}

string Eleitor::get_votoPresidente(){
	return votoPresidente;
}
string Eleitor::get_votoGovernador(){
	return votoGovernador;
}
string Eleitor::get_votoSenador1(){
	return votoSenador1;
}
string Eleitor::get_votoSenador2(){
	return votoSenador2;
}
string Eleitor::get_votoFederal(){
	return votoEstadual;
}
string Eleitor::get_votoDistrital(){
	return votoDistrital;
}

void Eleitor::resultado(){
	cout<<nome<<"		"<<votoDistrital<<"		"<<votoEstadual<<"		"<<votoSenador1<<"		"<<votoSenador2<<"		"<<votoGovernador<<"		"<<votoPresidente<<endl;
}