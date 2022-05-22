#include <stdio.h>
#include <string.h>
#define N 50

int Tamanho(char str[N]){
    int count = 0;
    while(str[count] != '\0'){
        count += 1;
    }
    return count;
}

int main(){
    char frase[N];
    int i, posicao;
    int tamanho = Tamanho(frase) + 1;

    fgets(frase, N, stdin);

    for (int i = 0, posicao = 0; i < tamanho; i++, posicao++) {
        if (frase[posicao] == ' ') {
            posicao++;
            frase[i] = frase[posicao];}
    }
    printf("%s", frase);

    return 0;}