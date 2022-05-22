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

    for (int i = 0; i < tamanho; i++) {

        for(int j = 0;  j < tamanho; j ++) {
            if (frase[j] == ' '){
                frase[j] = frase[i];
            }
        }
    }
    printf("%s", frase);

    return 0;
    
}