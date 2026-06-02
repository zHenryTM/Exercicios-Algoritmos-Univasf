#include <stdio.h>
int soma_vetor(int vetor[], int tamanho, int índice) {
    if (índice == tamanho) return 0;
    return vetor[índice] + soma_vetor(vetor, tamanho, índice + 1);
}
int main() {
    int tamanho, soma;
    scanf("%d", &tamanho);
    int vetor[tamanho];
    for (int i = 0; i < tamanho; i++)
        scanf("%d", &vetor[i]);
    soma = soma_vetor(vetor, tamanho, 0);    
    printf("%d\n", soma);
    return 0;
}
