#include <stdio.h>


int main() {
    int i;
    float div[15], n[15], maior;

    for (i = 0; i < 15; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%f", &n[i]);
    }

    maior = n[0];
    for (i = 0; i < 15; i++) {
        if (n[i] > maior) {
            maior = n[i];
        }
    }
    printf("\nDIVISÕES \n");
    for (i = 0; i < 15; i++) {
        div[i] = n[i] / maior;
        printf("\t%.0f / %.0f = %.2f \n", n[i], maior, div[i]);
    }
    return 0;
}