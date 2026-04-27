#include <stdio.h>

int main() {
	int matriz[5][5], i, j, soma = 0;
	
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			do {
				scanf("%d", &matriz[i][j]);
			} while (matriz[i][j] < 0);
		}
	}
	
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (i == j && i + 1 < 5) {
				soma += matriz[i + 1][j];
			}
		}
	}
	
	printf("%d", soma);
	
	return 0;
}
