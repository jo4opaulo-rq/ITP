#include <stdio.h>
#define linha 20
#define coluna 10

void multiplicacao(int matriz[linha][coluna], int vetor[linha]){
    printf("A multiplicação da matriz:\n");
    for (int i = 0; i < linha; i++){
        printf("\t");
        for(int j = 0; j < coluna; j++){
            printf("%d ", matriz[i][j] * vetor[i]);
        }
        printf("\n");
    }

}

 int main(){
     int matriz[linha][coluna], cont = 0;
     int vetor[20], soma = 0;
    
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            scanf("%d", &matriz[i][j]);
            cont += 1;
        }
        
    }

    for(int i = 0; i < linha; i++){
        vetor[i] = (matriz[i][0] + matriz[i][1]+ matriz[i][2] + matriz[i][3] +matriz[i][4] + matriz[i][5] + 
        matriz[i][6] + matriz[i][7] + matriz[i][8] + matriz[i][9]);
    }
    multiplicacao(matriz, vetor);
 }