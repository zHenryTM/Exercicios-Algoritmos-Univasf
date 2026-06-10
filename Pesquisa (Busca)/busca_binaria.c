// EXERCÍCIO FEITO NO DIA 10/06/26.

#include <stdio.h>

int busca_binaria(int vetor[], int valor_desejado, int tamanho_vetor) {
	int inicio = 0, meio = tamanho_vetor / 2, fim = tamanho_vetor - 1;
	
	while (inicio < fim) {
		if (vetor[meio] == valor_desejado) return meio;
		if (vetor[meio] < valor_desejado) inicio = meio + 1;
		else fim = meio - 1;
		meio = (inicio + fim) / 2;
	}
}

int main() {
	int vetor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
	int indice_valor_desejado = busca_binaria(vetor, 5, 20);
	
	printf("Seu elemento se encontra na posicao %d\n", indice_valor_desejado);
	
	return 0;
}
