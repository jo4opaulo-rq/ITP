#include <stdio.h>
#include <string.h>
#define N 50

void Trocar_letra(char palavra[N]){
    int i = 0;
    while(palavra[i] !='\0'){
        if(palavra[i]!=' ' && palavra[i]!='A' && palavra[i]!='E' && palavra[i]!='I' && palavra[i]!='O' 
        && palavra[i]!='U' && palavra[i]!='a' 
        && palavra[i]!='e' && palavra[i]!='i' && palavra[i]!='o' && palavra[i]!='u'){
            palavra[i] = '#';
        }
        i += 1 ;
    }
}

void inverte(char palavra[]){
    int i=0, j, tamanho;
   
    while(palavra[i]!='\0'){
        i++;
    }
    tamanho = i;
    char invertida[tamanho];
    invertida[tamanho]=palavra[i];
    for(i=0,j=1;i<tamanho;i++,j++){
        invertida[tamanho-j]=palavra[i];
    }
    strcpy(palavra,invertida);
}

int main(){
    char frase[N], frase_invertida[N];
    printf("Digite uma frase: ");
    fgets(frase,N,stdin);
    Trocar_letra(frase);
    inverte(frase);

    printf("%s", frase);


}