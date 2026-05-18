#include <stdio.h>

int main(int argc, char *argv[]) {
	if (argc == 2) {
		int number = atoi(argv[1]);
		int fatorial= number - 1, inicialNumber = number;
		for (; fatorial > 0; fatorial--)
			number *= fatorial;
		printf("O fatorial de %d eh: %d", inicialNumber, number);
	} else printf("Meu irmao, teu programa ta errado...");
	
	return 0;
}

