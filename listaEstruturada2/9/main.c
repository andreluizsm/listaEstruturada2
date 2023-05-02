#include <stdio.h>
#define ABACAXI printf("1 => Abacaxi 5.00 a unidade");
#define MACA printf("\n2 => Maca 1.00 a unidade");
#define PERA printf("\n3 => Pera 4.00 a unidade");

int main() {
	
	int numero = 0, compras = 0;
	
	ABACAXI
	MACA
	PERA
	
	do{
	
		
		printf("\n\nDigite o numero da fruta que voce deseja. Para encerrar digeite 4.\n\n");
		scanf("%d",&numero);
		switch(numero){
			case 1:
				compras += 5;
			break;
			case 2:
				compras += 1;
			break;
			case 3:
				compras += 4;
			break;
			default:
			break;
		}
	}while(numero != 4);
	
	printf("O valor das compras foi de: %d R$", compras);
	
	
	return 0;
}
