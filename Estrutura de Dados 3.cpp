#include <stdio.h>
#include <stdlib.h>
//Alocação de Memória - Dinâmica//
int main(){
	int *ponteiro;
	ponteiro = (int*) malloc(sizeof(int));
	if (ponteiro != NULL){
		*ponteiro = 30;
		printf("Valor alocado dinamicamente: %d\n", *ponteiro);
		free(ponteiro); //Libera a memória
	}else{
		printf("Erro na alocação de memória.\n");
	}
	return 0;
}