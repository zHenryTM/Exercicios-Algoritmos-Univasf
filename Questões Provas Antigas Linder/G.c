#include <stdio.h>
#include <string.h>

int main() {
    char estados[6][20] = {
      "Paraná",
      "Santa Catarina",
      "Rio Grande do Sul",
      "Goiás",
      "Mato Grosso",
      "Mato Grosso do Sul"
    };
    
    char respostas[6][20];
    char nome[100];
    int pontos = 0;
    
    scanf("%[^\n]", nome);
    
    for (int i = 0; i < 6; scanf("%[^\n]", &respostas[i]), i++);
    
    for (int resposta = 0; resposta < 6; resposta++)
        for (int estado = 0; estado < 6; estado++)
            if (!strcmp(respostas[resposta], estados[estado])) pontos++;
            
    printf("%s sua pontuação é de 2 pontos.\n", nome);
    
    return 0;
}
