#include <stdio.h>

int main() {
	
	int numero = 0, maior = 0, menor = 100;

	do{
		printf("Digite numeros positivos, para parar insira um negativo: ");
		scanf("%d",&numero);
		
		if (numero > maior) {
			maior = numero;
		}
		
		if (numero < 0){
			menor = menor;
		}
		
		if (numero < menor) {
			menor = numero;
		} 
	}while(numero > 0);

	printf("maior :%d\n\n menor: %d\n\n", maior, menor);
	
	return 0;
}
