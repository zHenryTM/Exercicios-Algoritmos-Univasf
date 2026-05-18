#include <stdio.h>

int fatorial(int n) {
	int x = n - 1;
	for (; x > 0; x--) n *= x;
	return n;
}

int main() {
	int n, f;
	scanf("%d", &n);
	f = fatorial(n);
	printf("O fatorial de %d e: %d", n, f);
	return 0;	
}
