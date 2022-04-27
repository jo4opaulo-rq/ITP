#include <stdio.h>

int MDC(int n1, int n2){
    int i, d = 2;
    int MaiorValor, MDC = 1;

    if (n1 > n2) {
        MaiorValor = n1;
    } else {
        MaiorValor = n2;
    }

    for (i = 2; i < MaiorValor; i++) {
        if (n1 % i == 0 && n2 % i == 0) {
            MDC = i;
        }
    }

    return MDC;
}
int main(){
    int n1, n2;

    printf("Digite o 1º número: ");
    scanf("%d", &n1);

    printf("Digite o 1º número: ");
    scanf("%d", &n2);

    printf("\nMDC entre %d e %d = %d \n", n1, n2, MDC(n1, n2));

    return 0;
}