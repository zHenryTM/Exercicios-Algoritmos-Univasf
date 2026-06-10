// ENUNCIADO DA QUESTÃO ENCONTRA-SE NO ARQUIVO F.pdf

#include <stdio.h>

int main() {
    long long int qtd_jogadores;
    
    scanf("%lld", &qtd_jogadores);
    
    long long int assassinatos[qtd_jogadores];
    
    for (int i = 0; i < qtd_jogadores; scanf("%lld", &assassinatos[i]), i++);
    
    while (qtd_jogadores > 0) {
        int indice = 0, menor_valor, indice_menor_valor;
        
        while (indice < qtd_jogadores) {
            if (indice == 0) {
                menor_valor = assassinatos[indice];
                indice_menor_valor = indice;
            } else if (assassinatos[indice] < menor_valor) {
                menor_valor = assassinatos[indice];
                indice_menor_valor = indice;
            }
            
            indice++;
        }
        
        printf("%d ", menor_valor);
        
        assassinatos[indice_menor_valor] = assassinatos[qtd_jogadores - 1];
        
        qtd_jogadores--;
    }  

    return 0;
}
