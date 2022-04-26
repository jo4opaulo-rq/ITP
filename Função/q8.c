#include <stdio.h>
int fatorial(int n){
    int fat = 1;
    for(int i=n;i>1;i--){
        fat = fat * i;
 }
     return fat;
}
int main(){
    int x;
    printf("Digite um numero: ");
    scanf("%i", &x);
    printf("O fatorial de %i é igual: %i\n", x, fatorial(x));
    return 0;
}