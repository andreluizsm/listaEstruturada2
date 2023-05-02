#include <stdio.h>

int main() {
	
	int i,notas[10],media = 0;

	printf("Digite as 10 notas: ");
	
	for(i = 0; i < 10; i++){
		scanf("%d",&notas[i]);
		media += notas[i];
	}

	printf("A media das notas foi de %d",media/10);	
	return 0;
}
