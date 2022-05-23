#include <stdio.h>
#include <string.h>
int letras_diferentes(char palavra[], int tam)
{
    char tabela[30];
    for (int i = 0; i < tam; i += 1) tabela[palavra[i]] += 1; // a letra
    int n = 0;
    for (int i = 0; i < 30; i += 1) if(tabela[i] != 0) n = n + 1; // + essa
    return n;
};
int main(){
    char frase[30];
    fgets(frase, 30, stdin);
    printf("%d", letras_diferentes(frase, 30));
}