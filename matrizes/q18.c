#include <stdio.h>
#define linha 5
#define coluna 5
int Soma_secundaria(int matriz[linha][coluna]){
    int soma_secundaria = 0;
    soma_secundaria += matriz[0][4];
    soma_secundaria += matriz[1][3];
    soma_secundaria += matriz[2][2];
    soma_secundaria += matriz[3][1];
    soma_secundaria += matriz[4][0];
    
    return soma_secundaria;
}
int main(){
    int matriz[linha][coluna];

    for(int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Soma dos elementos da diagonal secundária = %d\n", Soma_secundaria(matriz));

}