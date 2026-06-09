#include <stdio.h>

int main() {
	int qtd_strings, i, qtd_letras;
	char string[100];
	
	scanf("%d", &qtd_strings);
	
	for (i = 0; i < qtd_strings; i++) {
		scanf("%s", string);
		for (qtd_letras = 0; string[qtd_letras]; qtd_letras++);
		printf("%d\n", qtd_letras);
	}
	
	return 0;
}
