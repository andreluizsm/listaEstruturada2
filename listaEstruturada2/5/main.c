#include <stdio.h>

int main() {
	
	int numero,i;
	
	printf("Digite um numero positivo: ");
	scanf("%d",&numero);
	
	for (i = 1; i <= numero; i++) {
		
		if(numero % i == 0) {
			printf("%d\n",i);
		}
	}
	
	return 0;
}
