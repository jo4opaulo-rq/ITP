#include <stdio.h>

int main() {
    int n[10], filtro[10];
    int i, p = 0;

    printf("Vetor A\n");
    for (i = 0; i < 10; i++) {
        printf("\tDigite o %dº número: ", i + 1);
        scanf("%d", &n[i]);
        if (n[i] != 0 && n[i] > 0) {
            filtro[p] = n[i];
            p++;
        }
    }
    if (p > 0) {
        printf("\nVetor B: ");
        for (i = 0; i < p; i++) {
            printf("%d | ", filtro[i]);
        }
        printf("\n");
    } else {
        printf("\nTodos os números digitados foram inválidos. \n");
    }

    return 0;
}
