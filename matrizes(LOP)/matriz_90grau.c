#include <stdio.h>

int main(){
    int matriz[3][3];
    // i = linha 
    // j = coluna
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++ ){
            scanf("%d", &matriz[i][j]);
            
        }
        
    }
    for(int k = 0; k < 3 ; k++){
        for(int j = 2; j >= 0; j--){
            printf("%d ", matriz[j][k]);
            
        }
        printf("\n");
    }
}