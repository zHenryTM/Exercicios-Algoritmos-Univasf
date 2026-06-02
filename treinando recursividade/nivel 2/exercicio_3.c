#include <stdio.h>

int soma(int y) {
    if (y == 0) return y;
    return y + soma(y - 1);
}

int main() {
    int x;
    scanf("%d", &x);
    printf("%d\n", soma(x));
    return 0;
}
