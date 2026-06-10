// ENUNCIADO DA QUESTÕES ENCONTRA-SE NO ARQUIVO E.pdf

#include <stdio.h>
#include <math.h>

int main() {
    int N;
    
    scanf("%d", &N);
    
    int A[N], B[N];
    
    for (int i = 0; i < N; scanf("%d", &A[i]), i++);
    for (int j = 0; j < N; scanf("%d", &B[j]), j++);
    
    for (int i = 0; i < N; i++) {
        if (i % 4 == 0)         A[i] *= B[i];
        else if (i % 4 == 1)    A[i] -= B[i];
        else if (i % 4 == 2)    A[i] /= B[i];
        else if (i % 4 == 3)    A[i] = (int)pow(A[i], B[i]);
    
        if (A[i] > 10) while (A[i] / 10 > 0) A[i] /= 10;
        else if (A[i] < 0) A[i] *= -1;
    }
    
    if (N < 6) {
        for (int i = 0; i < N; printf("%d", A[i]), i++);
        for (int i = 0; i < 6 - N; printf("0"), i++);
    } else for (int i = N - 6; i < N; printf("%d", A[i]), i++);

    return 0;
}
