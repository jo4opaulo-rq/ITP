#include <stdio.h>

float soma_intervalo(float n){
    float soma = 0;
    for(int i=1;i<=n;i++){
        soma += i;

    }
    return soma;
}
int main(){
    float n, result;
    printf("Informe um numero postivo: ");
    scanf("%f", &n);
    result = soma_intervalo(n);
    printf("\nA soma do intervalo é igual a: %.2f", result);
    return 0;
}
