#include <stdio.h>
#define linha 3
#define coluna 8

void Soma(int matriz_1[linha][coluna], int matriz_2[linha][coluna]){
     int soma_matriz[linha][coluna];

    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            soma_matriz[i][j] = (matriz_1[i][j] + matriz_2[i][j]);

        }
    }
    printf("A soma das matrizes:\n");
    
     for(int i = 0; i < linha; i++){
        printf("\t");
        for(int j = 0; j < coluna; j++){
            printf("%d ", soma_matriz[i][j]);
        }
        printf("\n");  
    }
}
void Subtracao(int matriz_1[linha][coluna], int matriz_2[linha][coluna]){
    int dif_matriz[linha][coluna];
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            dif_matriz[i][j] = (matriz_1[i][j] - matriz_2[i][j]);

        }
    }
    printf("A diferença entre as matrizes:\n");
    
     for(int i = 0; i < linha; i++){
        printf("\t");
        for(int j = 0; j < coluna; j++){
            printf("%d ", dif_matriz[i][j]);
        }
        printf("\n");  
    }

}

int main(){
    int matriz_1[linha][coluna], matriz_2[linha][coluna];

    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            scanf("%d", &matriz_1[i][j]);

        }
    }
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            scanf("%d",&matriz_2[i][j]);

        }
    }
    Soma(matriz_1, matriz_2);
    Subtracao(matriz_1, matriz_2);
}