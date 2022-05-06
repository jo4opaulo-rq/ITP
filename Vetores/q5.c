#include <stdio.h>

int main(){
    int log[15], prog[10], repitido[10];
     int i, j, p = 0;

    printf("Matrículas lógica:\n ");
    for(int i = 0; i < 15; i++){
        printf("\t");
        scanf("%d", &log[i]);
    }
    printf("\nMatrículas linguagem de Programação:\n ");
    for(int i = 0; i < 10; i++){
        printf("\t");
        scanf("%d", &prog[i]);
    }
    for (i = 0; i < 15; i++) {
        for (j = 0; j < 10; j++) {
            if (log[i] == prog[j]) {
                repitido[p] = log[i];
                p++;
            }
        }
    }
    if (p > 0) {
        printf("\nMatriculas repitidoetidas: ");
        for (i = 0; i < p; i++) {
            printf("%d, ", repitido[i]);
        }
    } 
    else{
        printf("\nNenhum número de matricula repitidoetido foi encontrado. \n");
    }
}