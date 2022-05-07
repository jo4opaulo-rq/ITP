#include <stdio.h>
#define linha 2
#define coluna 4
float media(int matriz[linha][coluna]){
    float media = 0;
    float cont = 0;
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            cont += matriz[i][j];
        }
        
    }
    media = cont / 8;
    return media;
}

int main(){
    int matriz[linha][coluna];
    int cont1 = 0;
    int cont2 = 0;
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            scanf("%d", &matriz[i][j]);
        }
        
    }
    for (int j = 0; j < coluna; j++){
            if(matriz[0][j] >= 12 && matriz[0][j] <= 20){
                cont1 +=1;
            }
            if(matriz[1][j] >= 12 && matriz[1][j] <= 20){
                cont2 +=1;
            }
    }
    printf("A quantidade de numeros na linha 1: %d\nA quantidade de numeros na linha 2: %d\n", cont1, cont2);
    printf("A media é igual a: %.2f", media(matriz));
}