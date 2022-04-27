#include <stdio.h>

int potencia(int x, int z){
    int i, pot = x;
    for (i = 1; i < z; i++) {
        pot = pot* x;
    }
    return pot;
}
int main(){
    int x, z;
    printf("Digite um valor para X: ");
    scanf("%i", &x);

    printf("Digite um valor para z: ");
    scanf("%i", &z);

    printf("%i^%i = %i", x, z, potencia(x, z));
    return 0;
}