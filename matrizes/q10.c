#include <stdio.h>
#define linha 5
#define coluna 5

int Soma_linha_4(int matriz[linha][coluna]){
    int soma4 = 0;
    for(int j = 0; j < coluna; j++){
        soma4 += matriz[4][j];
    }
    return soma4;

}
int Soma_linha_2(int matriz[linha][coluna]){
    int soma2 = 0;
    for(int j = 0; j < coluna; j++){
        soma2 += matriz[2][j];
    }
    return soma2;

}
int Soma_principal(int matriz[linha][coluna]){
    int soma_principal= 0;
    for(int j = 0; j < coluna; j++){
        soma_principal+= matriz[j][j];
    }
    return soma_principal;

}
int Soma_secundaria(int matriz[linha][coluna]){
    int soma_secundaria = 0;
    soma_secundaria += matriz[0][4];
    soma_secundaria += matriz[1][3];
    soma_secundaria += matriz[2][2];
    soma_secundaria += matriz[3][1];
    soma_secundaria += matriz[4][0];
    
    return soma_secundaria;
}
int Soma_tudo(int matriz[linha][coluna]){
    int soma_total = 0;
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            soma_total = soma_total + matriz[i][j];
        }
    }
    return soma_total;
}

int main(){
    int matriz[linha][coluna];
    for(int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            scanf("%d", &matriz[i][j]);
        }
        
    }
   
    printf("Soma dos elementos da linha 4 = %d\n", Soma_linha_4(matriz));
    printf("Soma dos elementos da coluna 2 = %d\n", Soma_linha_2(matriz));
    printf("Soma dos elementos da diagonal principal = %d\n", Soma_principal(matriz));
    printf("Soma dos elementos da diagonal secundária = %d\n", Soma_secundaria(matriz));
    printf("Soma de todos os elementos da matriz = %d", Soma_tudo(matriz));
}