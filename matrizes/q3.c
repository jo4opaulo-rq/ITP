#include <stdio.h>
#define linha 6
#define coluna 3

int main(){
    int matriz[linha][coluna];
    int indiceMaiorL, indiceMaiorC, indiceMenorL, indiceMenorC, menor = matriz[0][0], maior = matriz[0][0];

    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            scanf("%d", &matriz[i][j]);

        }
    }
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            if (matriz[i][j] > maior) {
                indiceMaiorL = i;
                indiceMaiorC = j;
                maior = matriz[i][j];
            }

            if (matriz[i][j] < menor) {
                indiceMenorL = i;
                indiceMenorC = j;
                menor = matriz[i][j];
            }
        }
    }
    printf("\nMaior elemento é M[%d][%d] = %d \n", indiceMaiorL, indiceMaiorC, maior);
    printf("Menor elemento é M[%d][%d] = %d \n", indiceMenorL, indiceMenorC, menor);

}