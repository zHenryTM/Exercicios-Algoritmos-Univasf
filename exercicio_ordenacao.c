/*
ESTE EXERCÍCIO FOI UM "EXPERIMENTO" DO PROF. MARCELO LINDER, COM O INTUITO DE VERIFICAR COMO ORDENARÍAMOS UM VETOR
ANTES DE CONHECERMOS MÉTODOS DE CLASSIFICAÇÃO (ORNEDANAÇÃO), FEITO NO DIA 03/06/2026.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprimir(int v[], int tamanho) {
	for(int i = 0; i < tamanho; i++)
		if (!i) printf("V = {%d, ", v[i]);
		else if (i == tamanho - 1) printf("%d}\n", v[i]);
		else printf("%d, ", v[i]);
}

void ordenar(int v[], int tamanho) {
	int apontador = 1;
	while(apontador < tamanho) {
		int varredor = 0;
		for (; varredor < apontadorl; varredor++)
			if (v[varredor] > v[apontador]) {
				int aux = v[varredor];
				v[varredor] = v[apontador];
				v[apontador] = aux;
			}
		indice_atual++;
	}
}

int main() {
	srand(time(NULL));  // Semente com tempo atual para gerar números distintos
	int tamanho;
	scanf("%d", &tamanho);
	int v[tamanho];
	for(int i = 0; i < tamanho; i++) {
		int numero = rand() % 100;
		v[i] = numero;
	}
	printf("Vetor Antigo:\n");
	imprimir(v, tamanho);
	ordenar(v, tamanho);
	printf("\nVetor Novo:\n");
	imprimir(v, tamanho);
	return 0;
}
