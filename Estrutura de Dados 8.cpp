#include <stdio.h>
#include <string.h>
struct Pessoa{
	char nome[50];
	int idade;
	char telefone[15];
};
int main(){
	struct Pessoa lista[4];
	int i;
	//Preenchendo as informações para cada pessoa do grupo 'Help do sus'
	strcpy(lista[0].nome, "Caua Souza");
	lista[0].idade = 20;
	strcpy(lista[0].telefone, "(85)99950-8769");
	
	strcpy(lista[1].nome, "Leonardo Alves");
	lista[1].idade = 20;
	strcpy(lista[1].telefone, "(85)98611-0119");
	
	strcpy(lista[2].nome, "Caua Yuri");
	lista[2].idade = 20;
	strcpy(lista[2].telefone, "(85)98701-8248");
	
	strcpy(lista[3].nome, "Juan Wagner");
	lista[3].idade = 20;
	strcpy(lista[3].telefone, "(85)99283-4393");
	//Imprimindo as informações
	for (i = 0; i < 4; i++){
		printf("Nome: %s\n", lista[i].nome);
		printf("Idade: %d\n", lista[i].idade);
		printf("Telefone: %s\n\n", lista[i].telefone);
	}
	return 0;
}