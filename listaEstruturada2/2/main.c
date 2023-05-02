#include <stdio.h>
#include <math.h>

int main() {
	
	float x1,x2,y1,y2,resultado;
	
	
	printf("passe 4 valores: ");
	scanf("%f%f%f%f",&x1,&x2,&y1,&y2);
	
	resultado = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	printf("%.4f",resultado);
	
	
	return 0;
}
