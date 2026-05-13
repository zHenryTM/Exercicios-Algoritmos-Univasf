/*

ESTE PROGRAMA SIMULA A PASSAGEM DE PARÂMETROS POR REFERÊNCIA NA LINGUAGEM C, UM RECURSO QUE A LINGUAGEM NÃO OFERECE,
MAS QUE PODE SER SIMULADO APROVEITANDO-SE DOS CONHECIMENTOS SOBRE PONTEIROS.

*/


#include <stdio.h>

void mudar_valor(int *x, int *y) {
    int z = *x;
    *x = *y;
    *y = z;
}

int main() {
    int a, b, *x, *y;
  
    x = &a;
    y = &b;
  
    scanf("%d %d", &a, &b);
    printf("Antes da mudança:\nA = %d\nB = %d\n\n", a, b);
  
    mudar_valor(x, y);
    printf("Depois da mudança:\nA = %d\nB = %d\n\n", a, b);
}
