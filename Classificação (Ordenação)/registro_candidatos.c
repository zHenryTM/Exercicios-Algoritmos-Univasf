/*
	EXERCÍCIO INCOMPLETO (NÃO DEU TEMPO DE FAZER EM AULA, TENHO QUE TERMINAR). FEITO NO DIA 08/06/26.
*/

#include <stdio.h>
#include <string.h>
#define tamanho_vetor 100


int qtd_candidatos = 0;


typedef struct registro_candidato {
	char nome[101];
	unsigned long long int numero_inscricao;
	float percentual_acertos;
} registro_candidato;


void incluir_candidato(registro_candidato candidatos[]) {
	if (qtd_candidatos <= tamanho_vetor) {		
		printf("Digite o nome do candidato:\n");
		
		scanf(" %s", candidatos[qtd_candidatos].nome);
		
		printf("Digite o numero de inscricao do candidato:\n");
		
		scanf("%llu", &candidatos[qtd_candidatos].numero_inscricao);
		
		printf("Digite o percentual de acertos do candidato:\n");
		
		scanf("%f", &	candidatos[qtd_candidatos].percentual_acertos);
		
		qtd_candidatos++;
	}
}


void excluir_candidato(registro_candidato candidatos[]) {
	if (qtd_candidatos > 0) {
		unsigned long long int numero_inscricao, i;
		
		printf("Digite o numero de matricula do candidato que deseja excluir:\n");
		
		scanf("%llu", &numero_inscricao);
		
		for (i = 0; i < qtd_candidatos; i++)
			if (candidatos[i].numero_inscricao == numero_inscricao) {
				candidatos[i] = candidatos[qtd_candidatos - 1];
				qtd_candidatos--;
			}
			
		printf("Candidato excluido com sucesso!\n");
	}
}


void ordenar_por_acertos(registro_candidato candidatos[]) {
	// USAR BUBBLE SORT
	if (qtd_candidatos <= tamanho_vetor) {
		int nome;
		unsigned long long int numero_inscricao;
		float percentual_acertos;
	}
}


void ordenar_por_ordem_alfabetica(registro_candidato candidatos[]) {
	// USAR SHAKER SORT
	if (qtd_candidatos <= tamanho_vetor) {
		int nome;
		unsigned long long int numero_inscricao;
		float percentual_acertos;
	}
}

void exibir_registros(registro_candidato candidatos[]) {
	if (qtd_candidatos > 0) {
		int i;
		
		for (i = 0; i < qtd_candidatos; i++)
			printf("Nome: %s\nNumero de Inscricao: %llu\nPercentual de Acertos: %.1f%%\n", candidatos[i].nome, candidatos[i].numero_inscricao, candidatos[i].percentual_acertos);
	} else printf("Nao ha candidatos registrados!\n");
}	



int main() {
	registro_candidato candidatos[tamanho_vetor];
	int opcao;
	
	do {
		printf("\nEscolha uma das opcoes baixo:\n1 - Incluir Candidato\n2 - Excluir Candidato\n3 - Ordenar por percentual de acertos\n4 - Ordenar por ordem alfabetica\n5 - Exibir candidatos\n0 - Sair\n");
		
		scanf("%d", &opcao);
		
		switch(opcao) {
			case 1: incluir_candidato(candidatos); break;
			case 2: excluir_candidato(candidatos); break;
			case 3: ordenar_por_acertos(candidatos); break;
			case 4: ordenar_por_ordem_alfabetica(candidatos); break;
			case 5: exibir_registros(candidatos); break;
		}
	} while (opcao);
	
	return 0;
}
