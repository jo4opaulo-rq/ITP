#include <stdio.h>

float sequencia(float num){
    float s = 0;
    for(float i=1;i<=num;i++){
        s += 1 / i;
    }
    return s;
}
int main(){
    float num;
    printf("Digite um valor: ");
    scanf("%f", &num);
    
    printf("S = %.2f \n", sequencia(num));
    return 0;
}