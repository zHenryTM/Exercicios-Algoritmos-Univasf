#include <stdio.h>

int main() {
    int operacao, dimensoes;
    
    scanf("%d %d", &operacao, &dimensoes);
    
    switch(operacao) {
        case 1: {
            int coordenadas_vetor1[dimensoes], coordenadas_vetor2[dimensoes], vetor_resultante[dimensoes];
            
            for (int i = 0; i < dimensoes; scanf("%d", &coordenadas_vetor1[i]), i++);
            for (int i = 0; i < dimensoes; scanf("%d", &coordenadas_vetor2[i]), i++);
            for (int i = 0; i < dimensoes; i++) {
                vetor_resultante[i] = coordenadas_vetor1[i] + coordenadas_vetor2[i];
                printf("%d ", vetor_resultante[i]);
            }
            
            break;
        }
        
        case 2: {
            int coordenadas_vetor1[dimensoes], coordenadas_vetor2[dimensoes], soma = 0;
            
            for (int i = 0; i < dimensoes; scanf("%d", &coordenadas_vetor1[i]), i++);
            for (int i = 0; i < dimensoes; scanf("%d", &coordenadas_vetor2[i]), i++);
            for (int i = 0; i < dimensoes; i++)
                soma += coordenadas_vetor1[i] * coordenadas_vetor2[i];
            
            printf("%d\n", soma);
            
            break;
        }
        
        case 3: {
            int coordenadas_vetor[dimensoes], escalar;
            
            for (int i = 0; i < dimensoes; scanf("%d", &coordenadas_vetor[i]), i++);
            
            scanf("%d", &escalar);
            
            for (int i = 0; i < dimensoes; i++) {
                coordenadas_vetor[i] *= escalar;
                
                printf("%d ", coordenadas_vetor[i]);
            }
            
            break;
        }
    }

    return 0;
}
