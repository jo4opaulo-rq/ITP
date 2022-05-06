#include <stdio.h>

int main(){
    int vetor[6];
    int impar = 0, par = 0;
    printf("Digite 6 valores: ");
    for (int i = 0;i <= 5; i++){
        scanf("%d", &vetor[i]);
    }
    printf("Pares:");
    for (int i = 0;i <= 5; i++){
        if(vetor[i] % 2 == 0){
            printf(" %d", vetor[i]);
            par +=1;
        }
    }
    printf("\nQuantidade de pares: %d", par);

    printf("\nImpares: ");
    for (int j = 0;j <= 5; j++){
        if(vetor[j] % 2 != 0){
            printf("%d ", vetor[j]);
            impar +=1;
        }


    }
    printf("\nQuantidade de impares: %d", impar);
}
