#include <stdio.h>
#define N 3

void Matriz(int matriz[N][N]){
    for(int linha = 0; linha < 3 ; linha++){
        for(int coluna = 2; coluna >= 0; coluna--){
            printf("%d ", matriz[coluna][linha]);
            
        }
        printf("\n");
    }

}

int main(){
      int matriz[3][3];
    // i = linha 
    // j = coluna
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++ ){
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\n");
    Matriz(matriz);
}
  