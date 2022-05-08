#include <stdio.h>
#define linha 4
#define coluna 5

int main(){
    int matriz[linha][coluna];
    int vetor[5], count = 0;
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            vetor[j] += matriz[i][j];
            count += 1;
        }
    }
    if (vetor[0] > 10 || vetor[1] > 10 || vetor[2] > 10 || vetor[3] > 10 || vetor[4] > 10){
        printf("Maiores que 10: ");
        for (int j = 0; j < coluna; j++){
            if(vetor[j] > 10){
                printf("%d ", vetor[j]);
            }
        }
    }else{
        printf("Não foi encontrado nenhum número maior que 10\n");
    }
    return 0;
}
