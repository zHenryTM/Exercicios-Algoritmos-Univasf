#include <stdio.h>
#include <string.h>

int main() {
	char str1[100];
	char str2[100];
	
	// verificar se têm o mesmo tamanho:
	// 		se sim, comparar o valor delas
	// 			se forem iguais, printar na tela esse fato
	// se não tiverem o mesmo tamanho:
	// 		concactene as strings e printe esse resultado na tela
	
	scanf("%99s", &str1);
	scanf("%99s", &str2);
	
	if ( strlen(str1) == strlen(str2) ) {
		if ( !strcmp(str1, str2) ) {
			// strings iguais
			printf("As strings representam valores iguais: %s", str1);
		}
	} else {
		printf("O valor da string concatenada equivale a: %s", strcat(str1, str2) );
	}
	
	return 0;
}
