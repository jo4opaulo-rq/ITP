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

void separar(char frase[]){
    int tamanho = Tamanho(frase);
    int i, espacoantesbrancos = 0;
    for (i = 0; frase[i] != ' ' ; i++){
        if (frase[i] == ' '){
            espacoantesbrancos++;
        }
    }
    
    for (i = espacoantesbrancos; i < tamanho; i++){
        if (frase[i] != ' '){
            printf("%c", frase[i]);
        }
        if (frase[i] == ' '){
            printf("\n");
        }
    }
}

int main(){
  char frase[N];
  fgets(frase, N, stdin);
  separar(frase);
  
  
}