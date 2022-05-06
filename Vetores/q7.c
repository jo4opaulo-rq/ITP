#include <stdio.h>

int main(){
    int vetor[10];
    int soma = 0, neg = 0;


    printf("Digite dez valores: ");
    for(int i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
    }
    for (int i = 0; i < 10; i++){
        if(vetor[i] < 0){
            neg += 1;
        }
        if(vetor[i] > 0){
            soma += vetor[i];
        }

    }
    printf("Quantidade de negativos: %i\nA soma dos positivos: %i", neg, soma);
}