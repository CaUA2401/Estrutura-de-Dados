#include <stdio.h>
#include <string.h>
#include <stdlib.h> // Necessário para malloc e free
// Definição da struct
struct Estudante {
    char nome[50];
    int idade;
    char matricula[20];
};
int main() {
    // Aloca memória dinamicamente para o estudante
    struct Estudante *estudante1 = (struct Estudante *) malloc(sizeof(struct Estudante));
    if (estudante1 != NULL) {
        // Atribuindo valores usando o operador -> (pois é um ponteiro)
        strcpy(estudante1->nome, "Caua Souza");
        estudante1->idade = 20;
        strcpy(estudante1->matricula, "202508267969");
        // Acessando e imprimindo os valores
        printf("Nome: %s\n", estudante1->nome);
        printf("Idade: %d\n", estudante1->idade);
        printf("Matricula: %s\n", estudante1->matricula);
        // Liberando a memória alocada
        free(estudante1);
    } else {
        printf("Erro ao alocar memoria!\n");
    }
    return 0;
}
