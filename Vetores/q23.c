#include <stdio.h>

int main() {
    int x[5], y[5], z[5];
    int i, px = 0, py = 5 - 1;

    printf("1º Vetor \n");
    for (i = 0; i < 5; i++) {
        printf("\tDigite o %dº valor: ", i + 1);
        scanf("%d", &x[i]);
    }

    printf("2º Vetor \n");
    for (i = 0; i < 5; i++) {
        printf("\tDigite o %dº valor: ", i + 1);
        scanf("%d", &y[i]);
    }

    printf("3º Vetor \n");
    for (i = 0; i < 5; i++) {
        z[i] = x[px] - y[py];
        printf("%d | ", z[i]);
        px++; 
        py--;
    }
    printf("\n");
    return 0;
}