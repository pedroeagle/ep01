#include "infoBR.hpp"
#include <stdio.h>
using namespace std;
Candidato::Candidato(int linha){
	FILE *info = fopen("../info_csv/BR.csv", "r");
	fseek(info, linha, SEEK_SET);
	int i = 0;
	char lixo[200];
	while(i < 14){
		fscanf(info, "[^;]%s", lixo);
		printf("%s\n\n", lixo);
		i++;
	}
	//fgetc(info);
	fscanf(info, cargo, "%[^;]c");
	cout<<cargo<<endl;
}
