#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int n[15], primo[15];
    int i, j, p = 0, cont, ver = 0;

    for (i = 0; i < 15; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &n[i]);

        cont = 0;
        for (j = 2; j <= n[i]; j++) { 
            if (n[i] % j == 0) {
                cont++;
            }
        }
        if (cont < 2) {
            primo[p] = n[i]; 
            p++;
            ver++;
        }
    }

    if (ver > 0) {
        printf("\nNúmeros primos digitados: ");
        for (i = 0; i < p; i++) {
            printf("%d | ", primo[i]);
        }
    }else {
        printf("\nNenhum número primo digitado. \n");
    }
    return 0;
}