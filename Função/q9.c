#include <stdio.h>
int conta_divisores(int num){
    int soma_div = 0;
   for (int i = 1; i <=num; i++) {
        if (num % i == 0) {
            soma_div += i;
        }
   }
    return soma_div;
}
int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%i", &num);
    printf("A soma dos divisores é: %i", conta_divisores(num));
    return 0;
}