#include <stdio.h>
#include <string.h>

#define qtd_elementos 10

int main() {
	char strings[qtd_elementos][20], strings_formatadas[qtd_elementos][21];
	int numeros[qtd_elementos], i;
	
	for (i = 0; i < qtd_elementos; i++) {
		printf("\nDigite um texto:\n");
		scanf("%19s", &strings[i]);
		
		printf("\nDigite um valor inteiro:\n");
		scanf("%d", &numeros[i]);
		
		sprintf(strings_formatadas[i], "%s%d", strings[i], numeros[i]);
	}
	
	for (i = 0; i < qtd_elementos; i++) {
		printf("\n\n%s\n", strings_formatadas[i]);
	}
}
