#include <stdio.h>
#define linha 10
#define coluna 10

float Soma_principal(int matriz[linha][coluna]){
    float soma_principal= 0;
    for(int j = 0; j < coluna; j++){
        soma_principal+= matriz[j][j];
    }
    return soma_principal;
}
int main(){
    int matriz[linha][coluna];
    float result;

    for(int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            scanf("%d", &matriz[i][j]);
        }
        
    }
    result = Soma_principal(matriz) / 10;
    printf("A média dos elementos da diagonal principal é = %.2f", result);
}