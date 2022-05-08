#include <stdio.h>
#define linha 3
#define coluna 4

int Pares(int matriz[linha][coluna]){
    int cont_pares = 0;
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            if (matriz[i][j] % 2 == 0){
                cont_pares += 1;
            }
        }
    }
    return cont_pares;
}
int Soma_impar(int matriz[linha][coluna]){
    int soma_impar = 0;
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            if (matriz[i][j] % 2 != 0){
                soma_impar += matriz[i][j];
            }
        }
    }
    return soma_impar;
}
float Media(int matriz[linha][coluna]){
    float media = 0;
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            media += matriz[i][j];
        }
    }
    return media/12;
}

int main(){
    int matriz[linha][coluna];

    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            scanf("%d", &matriz[i][j]);

        }
    }
    printf("Quantidade de pares: %d\n", Pares(matriz));
    printf("A soma dos impares: %d\n", Soma_impar(matriz));
    printf("A média de todos os elementos: %.2f", Media(matriz));

}