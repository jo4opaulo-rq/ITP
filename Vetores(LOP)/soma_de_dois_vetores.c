#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int vetor_a[n];
    int vetor_b[n];
    int soma[n];
    
    printf("TAMANHO DE N %d", n);
    if (n<=10){
        for(int j = 0; j < n; j++ ){
            printf("A\n");
            scanf("%d", &vetor_a[j]);
            scanf("%d", &vetor_a[j]);
            }
        
        for (int i =0;i<=n;i++){
        soma[i] = vetor_a[i] + vetor_b[i];
        }
        
        
         printf("%d", soma[3]);

    }
}