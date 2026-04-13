#include <stdio.h>

int main() {
	int qtd_strings, i, j;
	char string[100];
	
	scanf("%d", &qtd_strings);
	
	for (i = 0; i < qtd_strings; i++) {
		scanf("%s", &string);
		for (j = 0; string[j]; j++);
		printf("%d\n", j);
	}
	
	return 0;
}
