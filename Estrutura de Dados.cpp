#include <stdio.h>
int main(){
	int numero = 10;
	int *ponteiro;
	ponteiro = &numero;
	printf("Valor de numero: %d\n",numero);
	printf("Endereco de numero: %p\n",ponteiro);
	printf("Valor apontado por ponteiro: &p\n",*ponteiro);
	return 0;
}