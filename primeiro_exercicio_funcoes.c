#include <stdio.h>

int divisivel(int a, int b) {
	if (a % b) return 0;
	else return 1;
}

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", divisivel(a, b));
	return 0;
}
