/*

PRIMEIRO EXERCÍCIO DE SHAKER SORT. FEITO NO DIA 08/06/2026.

*/


#include <stdio.h>

void exibir_vetor(int v[], int tamanho) {
    int i;
    
    for (i = 0; i < tamanho; i++) {
        if (!i) printf("V = {%d, ", v[i]);
        
        else if (i == tamanho - 1) printf("%d}\n", v[i]);
        
        else printf("%d, ", v[i]);
    }
}

void ordenar_vetor(int v[], int tamanho) {	
	int i, j, esta_ordenado = 1, indice_inicial;
	
	for (i = 0; i < tamanho; i++) {
		for (j = 0; j < tamanho; j++)
			if (v[j] > v[j + 1]) {
				int aux = v[j];
				
				v[j] = v[j + 1];
				
				v[j + 1] = aux;
				
				esta_ordenado = 0;
			}
		
		tamanho--;
		
		if (esta_ordenado) break;
		
		for (j = tamanho, indice_inicial = i; j >= indice_inicial; j--)
			if (v[j] < v[j - 1]) {
				int aux = v[j];
				
				v[j] = v[j - 1];
				
				v[j - 1] = aux;
			}
	}
}

int main() {
	int tamanho;
	
	scanf("%d", &tamanho);
	
    int v[tamanho], i;

    for (i = 0; i < tamanho; scanf("%d", &v[i]), i++);
    
    printf("\nVetor Desordenado:\n");
    
    exibir_vetor(v, tamanho);
    
    ordenar_vetor(v, tamanho);
    
    printf("\nVetor Ordenado:\n");
    
    exibir_vetor(v, tamanho);
    
    return 0;
}
