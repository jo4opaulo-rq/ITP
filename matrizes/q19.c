#include <stdio.h>
#define linha 8
#define coluna 6
float Media_pares(int matriz[linha][coluna]){
    float media = 0;
    // for(int i = 0; i < linha; i+2){
        for(int j = 0; j < coluna; j++){
            media += matriz[0][j];
            media += matriz[2][j];
            media += matriz[4][j];
            media += matriz[6][j];
        }
    
    return media / 24;
}

int main(){
    int matriz[linha][coluna];

    for(int i = 0; i <= linha; i++){
        for(int j = 0; j < coluna; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("A média dos elementos das linhas pares da matriz = %.2f", Media_pares(matriz));
    return 0;
}