/*
PRIMEIRO EXERCÍCIO APLICANDO BUBBLE SORT. FEITO NO DIA 03/06/26.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprimir(int v[], int tamanho_vetor) {
	for (int i = 0; i < tamanho_vetor; i++)
		if (!i) printf("V = {%d, ", v[i]);
		else if (i == tamanho_vetor - 1) printf("%d}\n", v[i]);
		else printf("%d, ", v[i]);
}

void ordenar(int v[], int tamanho_vetor) {
	for (int i = 0; i < tamanho_vetor; i++)
		for (int j = 0; j < tamanho_vetor; j++) 
			if ( (j + 1 < tamanho_vetor) && (v[j] > v[j + 1]) ) {
				int aux = v[j];
				v[j] = v[j + 1];
				v[j + 1] = aux;
			}
		}

int main() {
	srand(time(NULL));
	int tamanho_vetor;
	scanf("%d", &tamanho_vetor);
	int v[tamanho_vetor];
	for (int i = 0; i < tamanho_vetor; i++) {
		int numero = rand() % 100;
		v[i] = numero;
	}
	printf("Vetor Antigo:\n");
	imprimir(v, tamanho_vetor);
	ordenar(v, tamanho_vetor);
	printf("\nVetor Novo:\n");
	imprimir(v, tamanho_vetor);
}
