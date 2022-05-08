#include <stdio.h>
#define linhaM 4
#define colunaM 6
#define linhaN 6
#define colunaN 4

int main(){
    int matrizM[linhaM][colunaM], matrizN[linhaN][colunaN];
    int matrizNova[linhaM][colunaN];

    for (int i = 0; i < linhaM; i++){
        for (int j = 0; j < colunaM; j++){
            scanf("%d", &matrizM[i][j]);
        }
    }
    for (int i = 0; i < linhaN; i++){
        for (int j = 0; j < colunaN; j++){
           scanf("%d", &matrizN[i][j]);
        }
    }
    for (int i = 0; i < linhaM; i++){
        for (int j = 0; j < colunaN; j++){
            matrizNova[i][j] = matrizM[i][j] + matrizN[i][j];
        }
        
    }
    printf("A soma das linhas de M com as colunas de N\n");
    for (int i = 0; i < linhaM; i++){
        printf("\t");
        for (int j = 0; j < colunaN; j++){
            printf("%d ", matrizNova[i][j]);
        }
        printf("\n");
    }
    
    
}