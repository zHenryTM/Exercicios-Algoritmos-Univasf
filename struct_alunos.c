#include <stdio.h>
#include <string.h>

#define qtd_dados 2

typedef struct {
		char nome[21];
		char data_nascimento[11];
		long long int numero_matricula;
		long long int cpf;
		float cr;
	}aluno;

void inicializar_vetor(aluno *alunos) {
	int i;
	
	for (i = 0; i < qtd_dados; i++) {
		char nome[21], data_nascimento[11];
		long long int numero_matricula, cpf;
		float cr;
		
		fgets(nome, 21, stdin);
		fgets(data_nascimento, 11, stdin);
		scanf("%lld %lld", &numero_matricula, &cpf);
		scanf("%f", &cr);
		
		setbuf(stdin, NULL);
		
		strcpy(alunos[i].nome, nome);
		strcpy(alunos[i].data_nascimento, data_nascimento);
		
		alunos[i].numero_matricula = numero_matricula;
		alunos[i].cpf = cpf;
		alunos[i].cr = cr;
	}
}

void exibir_dados_por_cpf(aluno *alunos, long long int cpf) {
	int i;
	for (i = 0; i < qtd_dados; i++) {
		if (alunos[i].cpf == cpf) {
			printf("Nome: %s\n", alunos[i].nome);
			printf("Nascimento: %s\n", alunos[i].data_nascimento);
			printf("Matricula: %lld\n", alunos[i].numero_matricula);
			printf("CPF: %lld\n", alunos[i].cpf);
			printf("CR: %.2f\n", alunos[i].cr);
			break;
		}
	}
}

void exibir_dados_por_indice(aluno *alunos, int i) {
	printf("Nome: %s\n", alunos[i].nome);
	printf("Nascimento: %s\n", alunos[i].data_nascimento);
	printf("Matricula: %lld\n", alunos[i].numero_matricula);
	printf("CPF: %lld\n", alunos[i].cpf);
	printf("CR: %.2f\n", alunos[i].cr);
}

int main() {
	aluno alunos[qtd_dados];
	
	inicializar_vetor(alunos);
	
	exibir_dados_por_indice(alunos, 1);
	
	// Se tu quiser testar o resto, boa sorte =D
	
	return 0;
}
