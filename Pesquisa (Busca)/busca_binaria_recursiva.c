#include <stdio.h>

int busca_binaria_recursiva(int v[], int indice_inicio, int indice_fim, int numero_buscado) {
    int indice_meio = (indice_inicio + indice_fim) / 2;
    
    if (v[indice_meio] == numero_buscado) return indice_meio;
    
    // Significa que o número buscado não está no vetor
    if (indice_inicio > indice_fim) return -1;
    
    if (v[indice_meio] < numero_buscado) busca_binaria_recursiva(v, indice_meio + 1, indice_fim, numero_buscado);
    
    // Número buscado é menor que o v[indice_meio]
    else busca_binaria_recursiva(v, indice_inicio, indice_meio - 1, numero_buscado);
}

int main() {
    int v[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int numero_buscado, indice_numero_buscado;
    
    // Imprime o vetor na tela
    for (int i = 0; i < 10; i++)
        printf("%d ", v[i]);
    
    printf("\n\nDigite o número que quer encontrar: ");
    
    scanf("%d", &numero_buscado);
    indice_numero_buscado = busca_binaria_recursiva(v, 0, 9, numero_buscado);
    
    printf("\nO número se encontra no índice %d\n", indice_numero_buscado);
}
