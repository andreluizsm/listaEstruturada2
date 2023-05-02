#include <stdio.h>
#define PI 3.14159
 
int main() {
	
	float raio,area = 0,volume = 0;
	
	printf("Digite o valor do raio: ");
	scanf("%f",&raio);
	
	area = 4 * PI * (raio * raio);
	volume = (4.0/3) * PI * (raio * raio * raio);
	
	printf("O volume e : %.2f\n A area e: %.2f",volume, area);
	
	return 0;
}
