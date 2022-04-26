#include <stdio.h>
float calc_media(){
    float soma, num, media, i;

    soma = 0;
    i = 0;
    num = 1;

    while(num != 0){
        printf("Digite um numero positivo: ");
        scanf("%f", &num);
        while(num < 0){
        printf("\nNúmero invalidao!");
        printf("\nDigite um numero positivo novamente: ");
        scanf("%f", &num);
        }
        
        soma += num;
        i++;
}
    media = soma/(i-1);

    return media;
}
int main(){
    float r;
    r = calc_media();
    printf("O valor medio digitado foi %.2f",r);
    return 0;
}