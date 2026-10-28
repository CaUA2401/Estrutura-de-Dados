#include <stdio.h>
#include <stdlib.h>
//Utilizando a alocação de memória - malloc//
int main(){
	int *ponteiro;
	ponteiro = (int*) malloc(5 * sizeof(int)); //Aloca memória para 5 inteiros
	if (ponteiro != NULL){ //Verifica se a alocação foi bem-sucedida
		int i;
		for (i = 0; i < 5; i++){
			ponteiro[i] = i + 1; //Inicializa os valores manualmente
		}
		for (i = 0; i < 5; i++){
			printf("%d ", ponteiro[i]);
		}
		free(ponteiro); //Libera a memória
	}else{
		printf("Erro na alocação de memória.\n");
	}
	return 0;
}