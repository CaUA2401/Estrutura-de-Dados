#include <stdio.h>
//Alocação de Memória - Estática//
int valorGlobal = 20; //Variável estática
void exibirValor(){
	print("Valor global:%d\n",valorGlobal);
}

int main(){
	exibirValor();//Chama a função para exibir o valor global
	return 0;
}
