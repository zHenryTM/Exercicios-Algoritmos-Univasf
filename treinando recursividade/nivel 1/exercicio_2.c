#include <stdio.h>

void contagem_progressiva(int n, int c) {
    if (c > n) return;
    printf("%d \n",  c++);
    contagem_progressiva(n, c);
}

int main() {
    int n, c = 0;
    scanf("%d", &n);
    contagem_progressiva(n, c);
    return 0;
}
