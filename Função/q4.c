#include <stdio.h>

float Raio(float raio){
   float calc_raio = 4/3 * (raio * raio * raio);
    return calc_raio;
}
int main(){
    float raio;
    printf("Informe o valor do raio: ");
    scanf("%f", &raio);
    printf("O volume é: %.2f", Raio(raio));
    return 0;
}