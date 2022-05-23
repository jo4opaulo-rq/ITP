#include <stdio.h>
#include <string.h>

int Tamanho(int n, char str[n]){
    int count = 0;
    while(str[count] != '\0'){
        count += 1;
    }
    return count;
}
char Primeiro(int n, char frase[]){ 
    printf("primeira frase: ");
    fgets(frase, n, stdin);

}
char Segunda(int n, char frase[]){ 
    printf("Segunda frase: ");
    fgets(frase, n, stdin);

}

void igual(int n_a, int n_b, char a[n_a], char b[n_b]){
    int tamanho_a = Tamanho(n_a, a);
    int tamanho_b = Tamanho(n_b, b);
    if (tamanho_a == 4){
        printf("ok");
    }


}
int main(){
    int n1, n2;
    printf("Tamanho da primeira e segunda frase: ");
    scanf("%d %d", &n1, &n2);
    char frase1[n1], frase2[n2];
    Primeiro(n1, frase1);
    Segunda(n2, frase2);
    igual(n1, n2, frase1, frase2);
}