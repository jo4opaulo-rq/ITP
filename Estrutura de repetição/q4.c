#include <stdio.h>

int main(){
	int num;

	printf("Digite um número: ");
	scanf("%i", &num);
	for (int count=0; count<=10;count++){
	int resultado= num * count;
	printf("%i * %i = %i\n", num, count, resultado);
}
}
