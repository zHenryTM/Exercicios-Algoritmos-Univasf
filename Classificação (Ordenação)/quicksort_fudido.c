#include <stdio.h>

void quicksort(int vetor[], int inicio_vetor, int fim_vetor) {
    if (inicio_vetor >= fim_vetor) return;
    // Particionar vetor
    int pivo = vetor[fim_vetor], j, k;
    for (j = inicio_vetor - 1, k = inicio_vetor; k <= fim_vetor; k++) {
        if (vetor[k] < pivo) {
            int aux = vetor[k];
            vetor[k] = vetor[++j];
            vetor[j] = aux;
        }
        if (k == fim_vetor) {
            int aux = vetor[k];
            vetor[k] = vetor[++j];
            vetor[j] = aux;
        }
    }
    // A esse ponto, j é o índice do pivo no vetor
    quicksort(vetor, inicio_vetor, j - 1);
    quicksort(vetor, j + 1, fim_vetor);
}

int main() {
    int tamanho_vetor, i;
    
    scanf("%d", &tamanho_vetor);
    
    int vetor[tamanho_vetor];
    
    // Lendo os valores do vetor
    for (i = 0; i < tamanho_vetor; scanf("%d", &vetor[i]), i++);
    
    quicksort(vetor, 0, tamanho_vetor - 1);
    
    // Exibindo os valores do vetor já ordenado
    for (i = 0; i < tamanho_vetor; printf("%d ", vetor[i]), i++);
    
    return 0;
}
