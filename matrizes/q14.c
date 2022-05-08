#include <stdio.h>
#define linha 2
#define coluna 3

int main(){
    int matriz[linha][coluna];
    int count = 0;

    for (int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            if (!(matriz[i][j] >= 5 && matriz[i][j] <= 15)){
                count += 1;
            }
        }
    }
    printf("A quantidade de elementos da matriz que não pertencem ao intervalo [5,15] = %d", count);
}
