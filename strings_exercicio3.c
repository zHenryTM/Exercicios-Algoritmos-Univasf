#include <stdio.h>

int main() {
	char string1[20];
	char string2[20];
	int i;
	
	scanf("%s", &string1);
	
	for (i = 0; i < 20; i++) {
		if (string1[i]) {
			string2[i] = string1[i];
		} else {
			string2[i] = string1[i];
			break;
		}
	}
	
	printf("%s", string2);
	
	return 0;
}
