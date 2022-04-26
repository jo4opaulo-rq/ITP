#include <stdio.h>

int verficador(int n){
    if (n > 0){
        printf("O número é positivo\n");
    }
    else{
        printf("O número é negativo\n");
    }
    return 0;
}

int main(){
    int n;
    printf("Digite um númeoro: ");
    scanf("%i", &n);
    verficador(n);
    return 0;
}
