#include <stdio.h>

int main(){
    int vetor[7];
    printf("Digite 7 vetoralores: ");
    for(int i = 0; i <= 6; i++){
        scanf("%d", &vetor[i]);
    }
    for (int i = 0; i <= 6; i++) {
        if (vetor[i] % 2 == 0) {
            printf("\t%d é multiplo de 2 \n", vetor[i]);
        } else if (vetor[i] % 3 == 0) {
            printf("\t%d é multiplo de 3 \n", vetor[i]);
        }
        if (vetor[i] % 2 == 0 && vetor[i] % 3 == 0) {
            printf("\t%d é multiplo de 2 e 3. \n", vetor[i]);
        }
    }
    return 0;
}