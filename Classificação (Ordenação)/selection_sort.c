#include <stdio.h>

void imprimir_vetor(int vetor[], int tamanho_vetor, char mensagem[]) {
    printf(mensagem);
    
    for (int i = 0; i < tamanho_vetor; i++)
        if (!i) printf("V = {%d, ", vetor[i]);
        else if (i == tamanho_vetor - 1) printf("%d}\n", vetor[i]);
        else printf("%d, ", vetor[i]);
}

void selection_sort(int vetor[], int tamanho_vetor) {
    for (int i = 0; i < tamanho_vetor - 1; i++) {
        int indice_menor_elemento = i, aux;
            
        for (int j = i + 1; j < tamanho_vetor; j++) 
            if (vetor[j] < vetor[indice_menor_elemento]) indice_menor_elemento = j;
        
        aux = vetor[i];
        vetor[i] = vetor[indice_menor_elemento];
        vetor[indice_menor_elemento] = aux;
    }
}

int main() {
    int tamanho_vetor;
    
    scanf("%d", &tamanho_vetor);
    
    int vetor[tamanho_vetor];
    
    for (int i = 0; i < tamanho_vetor; scanf("%d", &vetor[i]), i++);
    
    imprimir_vetor(vetor, tamanho_vetor, "Vetor Desordenado: ");
    selection_sort(vetor, tamanho_vetor);
    imprimir_vetor(vetor, tamanho_vetor, "Vetor Ordenado: ");
    
    return 0;
}
