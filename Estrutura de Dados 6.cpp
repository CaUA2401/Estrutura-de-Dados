#include <stdio.h>
#include <stdlib.h>
//Utilizando a alocação de memória - calloc//
int main(){
	int *ponteiro;
	ponteiro = (int*) calloc(5, sizeof(int)); //Aloca memória para 5 inteiros, inicia com os espaços de memória zerados
	if (ponteiro != NULL){ //Verifica se a alocação foi bem-sucedida
		int i;
		for (i = 0; i < 5; i++){
			printf("%d ", ponteiro[i]); //Exibe os valores iniciais (todos devem ser zero)
		}
		free(ponteiro); //Libera a memória
	}else{
		printf("Erro na alocação de memória.\n");
	}
	return 0;
}