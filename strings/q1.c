#include <stdio.h>
#include <string.h>

void Trocar_letra(char palavra[]){
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
int main(){
    char frase[30];
    printf("Digite uma frase: ");
    fgets(frase,30,stdin);
    Trocar_letra(frase);
    printf("%s", frase);


}