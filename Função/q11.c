#include <stdio.h>

float Soma(float n){
    float i, x = 1, num, den, S = 0;
    for (i = 1; i <= n; i++) {
        num = i * i + 1;
        den = i + 3;
        S += num / den;
    }
    return S;
}
int main(){
    float num;
    printf("Digite um número: ");
    scanf("%f", &num);
    printf("S = %.4f\n", Soma(num));
    return 0;
}