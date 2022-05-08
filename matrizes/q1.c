#include <stdio.h>
#define LINHA 3
#define COLUNA 5

int intervalo(int matriz[LINHA][COLUNA]){
    int cont = 0;
    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
           if(matriz[i][j] >= 15 && matriz[i][j] <= 20){
               cont += 1;
           }
        }
    }
    return cont;
}

int main(){
    int matriz[LINHA][COLUNA];

    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("A quantidade de numeros no intervalo de 15 e 20 é: %d", intervalo(matriz));
}