#include <eleitores.hpp>
#include <iostream>
using namespace std;
Eleitor::Eleitor(){

}
Eleitor::~Eleitor(){

}


void Eleitor::set_nome(char nome[43]){
	this->nome = nome;
}
string Eleitor::get_nome(){
	return this->nome;
}


void Eleitor::set_votoPresidente(char voto[6]){
	this->votoPresidente = voto;
}
string Eleitor::get_votoPresidente(){
	return this->votoPresidente;
}


void Eleitor::set_votoGovernador(char voto[6]){
	this->votoGovernador = voto;
}
string Eleitor::get_votoGovernador(){
	return this->votoGovernador;
}


void Eleitor::set_votoSenador(char voto[6]){
	this->votoSenador = voto;
}
string Eleitor::get_votoSenador(){
	return this->votoSenador;
}


void Eleitor::set_votoEstadual(char voto[6]){
	this->votoEstadual = voto;
}
string Eleitor::get_votoEstadual(){
	return this->votoEstadual;
}


void Eleitor::set_votoDistrital(char voto[6]){
	this->votoDistrital = voto;
}
string Eleitor::get_votoDistrital(){
	return this->votoDistrital;
}