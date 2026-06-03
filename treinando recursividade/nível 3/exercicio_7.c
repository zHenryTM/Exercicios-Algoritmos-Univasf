#include <stdio.h>

int maior_valor(int v[], int t, int i) {
    if (i == t - 1) return v[i];
    int prox = maior_valor(v, t, i+1);
    if (v[i] > prox) return v[i];
    else return prox;
}

int main() {
    int t, m;
    scanf("%d", &t);
    int v[t];
    for (int i = 0; i < t; i++)
        scanf("%d", &v[i]);
    m = maior_valor(v, t, 0);
    printf("%d", m);
    return 0;
}
