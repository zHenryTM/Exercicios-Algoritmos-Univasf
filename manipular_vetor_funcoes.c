#include <stdio.h>

void inicializar_vetor(int *v) {
	int i, valor;
	for (i = 0; i < 10; i++) {
		scanf("%d", &valor);
		*(v + i) = valor;
	}
}

void imprimir_vetor(int *v) {
	int i;
	for (i = 0; i < 10; i++)
		printf("vetor[%d] = %d\n", i, *(v + i));
}

int main() {
	int v[10];
	inicializar_vetor(v);
	imprimir_vetor(v);
	return 0;
}
