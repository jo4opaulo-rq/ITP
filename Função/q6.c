#include <stdio.h>
#include <string.h>

int peso_ideal(float alt, char sexo[1]){
    if (strcmp(sexo, "h") == 0){
        printf("O peso ideal é: %.2f", 72.7*alt-58 );
    }
    if (strcmp(sexo, "m") == 0){
        printf("O peso ideal é: %.2f", 62.1*alt-44.7);
    }
    return 0;
}
int main(){
    float alt;
    char sexo[1];
    printf("Qual sua altura: ");
    scanf("%f", &alt);
    printf("Qual seu sexo: [h]: homem, [m]: mulher:");
    scanf("\n%s", &sexo);
    peso_ideal(alt, sexo);
    return 0;
}