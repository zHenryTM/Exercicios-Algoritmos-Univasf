/*
	ESTE PROGRAMA RECEBE 10 NOMES DO USUÁRIO, 
	ADICIONA-OS A UMA MATRIZ DE CARACTERES E 
	EXIBE OS VALORES NA TELA.
*/


#include <stdio.h>

#define qtd_strings 10
#define qtd_caracteres 20

int main()
{0
	char nomes[qtd_strings][qtd_caracteres], *p;
	int i, j;
	
	p = &nomes[0][0];
	
	// Preenchendo a matriz com nomes
	for (i = 0; i < qtd_strings; i++)
		scanf("%s", (p + i * qtd_caracteres));
		
	// Exibindo os nomes na matriz
	for (i = 0; i < qtd_strings; i++)
	
		/* 
			Vetores de strings é diferente. Você não passa para onde o ponteiro aponta,
			mas o endereço de memória, e a Linguagem C se vira.
		*/
		printf("%s\n", (p + i * qtd_caracteres));
	
	return 0;
}
