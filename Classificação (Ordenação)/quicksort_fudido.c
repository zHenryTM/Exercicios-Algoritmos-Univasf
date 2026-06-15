#include <stdio.h>

void quicksort(int vetor[], int inicio_vetor, int fim_vetor) {
	
    if (inicio_vetor >= fim_vetor) return;
    
    int pivo = vetor[fim_vetor];
    
    int j, k;  // Serão usadas dentro no for(). Contudo, ao final, j armazernará o índice do pivô dentro do vetor.
    		   // Por isso, é importante declarar essas variáveis fora do laço por questões de escopo
    
    // Particionando o vetor usando a técnica "Algoritmo de Lamuto"
    // Se quiser entender a lógica dessa técnica mais a fundo, acesse: https://www.youtube.com/shorts/MeBYqiehwyQ
    for (j = inicio_vetor - 1, k = inicio_vetor; k <= fim_vetor; k++) {
    	
    	// Se o elemento atual do vetor for menor que o pivô, incrementa j e troca os valores de vetor[j] e vetor[k]
    	// Essa troca faz parte do algoritmo de Lamuto
        if (vetor[k] < pivo) {
            int aux = vetor[k];
            vetor[k] = vetor[++j];
            vetor[j] = aux;
        }
        
        // Se estiver iterando sobre o último valor do vetor, incrementa j e coloque o pivo na posição vetor[j]
        if (k == fim_vetor) {
            int aux = vetor[k];
            vetor[k] = vetor[++j];
            vetor[j] = aux;
        }
    }
    
    // A esse ponto, j contém o valor do índice do pivo no vetor. Isso será útil para definir o último índice
    // do vetor particionado à esquerda do pivo e para definir o primeiro índice do vetor particionado à direita do pivo
    
    quicksort(vetor, inicio_vetor, j - 1);  // Vetor à esquerda do pivô
    
    quicksort(vetor, j + 1, fim_vetor);  // Vetor à direita do pivô
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
