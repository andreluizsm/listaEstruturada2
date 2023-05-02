#include <stdio.h>
#define DIFERENCA A*B - C*D

int main() {
	
	int A,B,C,D;
	
	printf("Digite os 4 valores: ");
	scanf("%d%d%d%d",&A,&B,&C,&D);
	
	printf("DIFERENCA = (%d * %d - %d * %d)",A,B,C,D);
	printf("\nDIFERENCA = (%d)",DIFERENCA);
	
	return 0;
}
