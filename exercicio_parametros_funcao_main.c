/*
	COMPILE O CÓDIGO COMO PREFERIR E O EXECUTE PELO CMD, ESCREVENDO O NOME DO ARQUIVO EXECUTÁVEL 
	E, NA FRENTE, O VALOR DA VARIÁVEL, NO CASO DESTE EXERCÍCIO, UM NÚMERO INTEIRO.
*/

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
