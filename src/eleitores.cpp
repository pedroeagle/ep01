#include <eleitores.hpp>

using namespace std;
Eleitor::Eleitor(){

}
Eleitor::~Eleitor(){

}

void Eleitor::set_nome(char nome[43]){
	nome[strlen(nome)-1]='\0';
	this->nome = nome;
}
string Eleitor::get_nome(){
	return this->nome;
}
