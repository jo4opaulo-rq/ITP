#include <stdio.h>
#define linha 5
#define coluna 5
void Multiplicacao(int matriz[linha][coluna], int MAIOR){
    
    for (int i = 0; i < linha; i++){
        printf("\t");
        for (int j = 0; j < coluna; j++){
            printf("%d ", matriz[i][j] * MAIOR);
        }
        printf("\n");
    }
    
}
int main(){
    int matriz[linha][coluna];
    int maior = matriz[linha][coluna];
    int MAIOR;

    for(int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            if (MAIOR < matriz[i][j]) {
                MAIOR = matriz[i][j];
            }
        }
    }
    printf("O maior número encontrado foi: %d\n", MAIOR);
    printf("O resultado da matriz multiplicada por %d:\n", MAIOR);
    Multiplicacao(matriz, MAIOR);
    return 0;

}