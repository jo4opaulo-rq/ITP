#include <stdio.h>

int main(){
    int vetor[15];
    printf("Digite 15 valores: ");
    for (int i=0;i<15;i++){
        scanf("%d", &vetor[i]);
    }
    for (int j=0;j<15;j++){
        if (vetor[j] == 30){
            printf("30 encontrado na posição %d\n", j);
        }

    }
    return 0;
}