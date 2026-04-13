#include <stdio.h>

int main() {
	char nome[100];
	int i;
	
	scanf("%s", &nome);
	
	for (i = 0; i < 100; i++) {
		if (nome[i] == '\0') {
			printf("%d", i);
			break;
		}
	}
	
	return 0;
}
