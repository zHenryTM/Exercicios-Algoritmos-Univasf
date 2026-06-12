#include <stdio.h>

void imprimir_vetor(int vetor[], int tamanho_vetor, char mensagem[]) {
    printf(mensagem);
    
    for (int i = 0; i < tamanho_vetor; i++)
        if (!i) printf("V = {%d, ", vetor[i]);
        else if (i == tamanho_vetor - 1) printf("%d}\n", vetor[i]);
        else printf("%d, ", vetor[i]);
}

void inserction_sort(int vetor[], int tamanho_vetor) {
    int indice_atual = 1;
    
    while (indice_atual < tamanho_vetor) {
        if (vetor[indice_atual] < vetor[indice_atual - 1]) {
            int aux = vetor[indice_atual - 1];
            vetor[indice_atual - 1] = vetor[indice_atual];
            vetor[indice_atual--] = aux;
        } else indice_atual++;
    }
}

int main() {
    int tamanho_vetor;
    
    scanf("%d", &tamanho_vetor);
    
    int vetor[tamanho_vetor];
    
    for (int i = 0; i < tamanho_vetor; scanf("%d", &vetor[i]), i++);
    
    imprimir_vetor(vetor, tamanho_vetor, "Vetor Desordenado: ");
    inserction_sort(vetor, tamanho_vetor);
    imprimir_vetor(vetor, tamanho_vetor, "Vetor Ordenado: ");
    
    return 0;
}
