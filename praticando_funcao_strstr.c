#include <stdio.h>
#include <string.h>

int main () {
	char s1[20], s2[10], *p;
	
	scanf("%s", s1);
	scanf("%s", s2);
	
	// Devolve endereço de memória da primeira ocorrência de s2.
	p = strstr(s1, s2);
	
	if (p == NULL) printf("%d", 0);
	else printf("%s", p - s1);  // p = endereço, s1 (isolado) = endereço. Por isso dá para fazer endereço - endereço.
	
	return 0;
}
