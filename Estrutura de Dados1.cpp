#include <stdio.h>
//Alocação de Memória - Automática//
void funcaoExemplo(){
	int numero = 10; //Variável automática
	printf("Valor de numero: %d\n",numero);
}

int main(){
	funcaoExemplo(); //Chamada da função
	return 0;
}