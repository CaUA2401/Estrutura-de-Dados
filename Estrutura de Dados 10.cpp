#include <stdio.h>
#include <string.h> 
struct Disciplina {
	char nome[30];
	char professor[50];
	int cargahoraria;
};
struct Aluno{
	char nome[30];
	int idade;
	int matricula;
	struct Disciplina disciplinas[3];
};
void cadastrarDisciplina(struct Disciplina *disciplina, const char *nome, const char *professor, int cargahoraria){
	strcpy(disciplina->nome, nome);
	strcpy(disciplina->professor, professor);
	disciplina->cargahoraria = cargahoraria;
}
void cadastrarAluno(struct Aluno *aluno, const char *nome, int idade, int matricula){
	strcpy(aluno->nome, nome);
	aluno->idade = idade;
	aluno->matricula = matricula;
	
	cadastrarDisciplina(&aluno->disciplinas[0], "Computacao em Nuvem", "Prof. Boanerges", 60);
	cadastrarDisciplina(&aluno->disciplinas[1], "Estrutura em C++", "Prof. Danielle", 45);
	cadastrarDisciplina(&aluno->disciplinas[2], "Redes de Computadores", "Prof. Jefferson", 50);
}
void exibirAluno(struct Aluno *aluno){
	int i;
	printf("Nome do Aluno: %s\n", aluno->nome);
	printf("Idade: %d\n", aluno->idade);
	printf("Matricula: %d\n", aluno->matricula);
	
	printf("Disciplinas:\n");
	for(i = 0; i < 3; i++){
		printf(" Disciplina %d:\n", i + 1);
		printf(" Nome: %s\n", aluno->disciplinas[i].nome);
		printf(" Professor: %s\n", aluno->disciplinas[i].professor);
		printf(" Carga Horaria: %d horas\n", aluno->disciplinas[i].cargahoraria);
	}
}
int main(){
	struct Aluno aluno1;
	cadastrarAluno(&aluno1, "Renata Almeida", 24, 202304063087);
	exibirAluno(&aluno1);
	return 0;
}		