#include <stdio.h>

int main() {
	
	int numero = 0,inicio = 0, primeiro = 1, outro;
		
	do{
		printf("Digite um numero inteiro maior ou igual a 0: ");
		scanf("%d",&numero);
	}while(numero < 0);
	
	int i;
	
	if (numero == 0) {
		printf("%d",inicio);
	}else if (numero == 1) {
		printf("%d",primeiro);
	}else {
		for(i = 2; i < numero; i++) {
			outro = inicio + primeiro;
			inicio = primeiro;
			primeiro = outro;		
		}
	}
	
	printf("\n\n%d\n\n",outro);
	
	
	return 0;
}
























