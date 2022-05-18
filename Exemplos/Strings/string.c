#include <stdio.h>
#include <string.h>
#define N 30


int Tamanho(char palavra[N]){
    int count = 0;
    while(palavra[count] != '\0'){
        count += 1;
    }
    return count;
}
int main(){
    char palavra[N];
    scanf("%30[^\n]", palavra);

    printf("%d",Tamanho(palavra));
}