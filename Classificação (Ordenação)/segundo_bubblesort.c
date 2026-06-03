/*
SEGUNDO EXERCÍCIO APLICANDO BUBBLE SORT, EM QUE DUAS MELHORIAS FORAM FEITAS NO EXERCÍCIO ANTERIOR:
	1 - SE O VETOR JÁ ESTIVER ORDENADO, NÃO É NECESSÁRIO VARRER O VETOR À PROCURA DE NÚMEROS A ORDENAR.
	2 - IMPEDIR QUE UM SUBVETOR JÁ ORDENADO SEJA VARRIDO NOVAMENTE.
											FEITO NO DIA 03/06/26.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprimir(int v[], int tamanho_vetor) {
	int i;
	for (i = 0; i < tamanho_vetor; i++)
		if (!i) printf("V = {%d, ", v[i]);
		else if (i == tamanho_vetor - 1) printf("%d}\n", v[i]);
		else printf("%d, ", v[i]);
}

void ordenar(int v[], int tamanho_vetor) {
	int i, houve_troca = 0;
	
	for (i = 0; i < tamanho_vetor; i++) {
		int j;	
		for (j = 0; j < tamanho_vetor; j++) {
			if ( (j + 1 < tamanho_vetor) && (v[j] > v[j + 1]) ) {
				int aux = v[j];		
				v[j] = v[j + 1];			
				v[j + 1] = aux;		
				houve_troca = 1;
			}
		}	                                              
		tamanho_vetor--;  			    // Garante que não se verifique sem necessidade um subvetor já ordenado.
		if (!houve_troca) break;  	// Se o vetor já estiver ordenado, não se precisa varrê-lo sem necessidade.
	}
}

int main() {
	srand(time(NULL));
	int tamanho_vetor;
	scanf("%d", &tamanho_vetor);
	int v[tamanho_vetor], i;
	for (i = 0; i < tamanho_vetor; i++) {
		int numero = rand() % 100;
		v[i] = numero;
	}
	printf("Vetor Antigo:\n");
	imprimir(v, tamanho_vetor);
	ordenar(v, tamanho_vetor);
	printf("\nVetor Novo:\n");
	imprimir(v, tamanho_vetor);
}
