#include <stdio.h>
#define linha 3
#define coluna 3
void multiplicacao(int matriz[linha][coluna], int n){
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            printf("%d ", matriz[i][j]* n);
        }
        printf("\n");
    }
}
    
int main(){
    int matriz[linha][coluna];
    int n;
    printf("Digite os numeros da matriz:\n");

    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Digite o número para multiplicação: ");
    scanf("%d", &n);
    multiplicacao(matriz, n);
}