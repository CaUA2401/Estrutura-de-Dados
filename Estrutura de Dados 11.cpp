#include <stdio.h>
#include <string.h>
#define NUM_MEDICAMENTOS 5
struct Medicamento {
	char nome[50];
	int codigo;
	int miligrama;
	float preco;
};
int main(){
	int i;
	struct Medicamento medicamentos[NUM_MEDICAMENTOS];
	//Preenchendo os dados dos produtos
	strcpy(medicamentos[0].nome, "Tadalafila");
	medicamentos[0].codigo = 45689;
	medicamentos[0].miligrama = 20;
	medicamentos[0].preco = 12.99;
	
	strcpy(medicamentos[1].nome, "Citrato de Sildenafila");
	medicamentos[1].codigo = 57748;
	medicamentos[1].miligrama = 50;
	medicamentos[1].preco = 16.79;
	
	strcpy(medicamentos[2].nome, "Losartana Potássica");
	medicamentos[2].codigo = 36422;
	medicamentos[2].miligrama = 50;
	medicamentos[2].preco = 4.99;
	
	strcpy(medicamentos[3].nome, "Cloridrato de Metformina de Liberacao Prolongada");
	medicamentos[3].codigo = 45050;
	medicamentos[3].miligrama = 500;
	medicamentos[3].preco = 9.49;
	
	strcpy(medicamentos[4].nome, "Dapaglifozina");
	medicamentos[4].codigo = 1632415;
	medicamentos[4].miligrama = 10;
	medicamentos[4].preco = 142.99;
	//Exibindo os dados dos medicamentos
	printf("=== Medicamentos ===\n");
	for (i = 0; i < 5; i++){
		printf("Produto %d:\n", i + 1);
		printf(" Nome: %s\n", medicamentos[i].nome);
		printf(" Codigo: %d\n", medicamentos[i].codigo);
		printf(" Miligrama: %dmg\n", medicamentos[i].miligrama);
		printf(" Preco: R$ %.2f\n\n", medicamentos[i].preco);
	}
	return 0;
}