#include <stdio.h>
long long int fatorial(int y) {
    if (y == 0) return 1;
    if (y == 1) return y;
    return y * fatorial(y - 1);
}
int main() {
    int x;
    scanf("%d", &x);
    printf("%lld\n", fatorial(x));
    return 0;
}
