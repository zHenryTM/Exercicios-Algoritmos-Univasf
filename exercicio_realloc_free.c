#include <stdio.h>
#include <stdlib.h>

int main() {
	int *numeros = NULL, qtd_numeros = 0;
	
	while (1) {
		int numero;
		
		scanf("%d", &numero);
		
		if (!numero) break;
		else {
			numeros = (int *)realloc(numeros, ++qtd_numeros * sizeof(int));
			
			if (!numeros) exit(1);
			
			*(numeros + (qtd_numeros - 1)) = numero;
		}
	}
	
	for (int i = 0; i < qtd_numeros; i++)
		printf("%d ", *(numeros + i));
	
	free(numeros);
	
	return 0;
}
