#include <stdio.h>

int main(){
    int vetor[5];
    int soma = 0;

    for(int i=0;i<5;i++){
        printf("Digite o %iº número: ", i+1); 
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    
    }
    printf("Os números digitados foram: %d + %d + %d + %d + %d = %d\n", vetor[0], vetor[1], 
    vetor[2], vetor[3], vetor[4], soma);
    return 0;
}