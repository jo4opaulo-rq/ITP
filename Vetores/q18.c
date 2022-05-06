#include <stdio.h>

int main() {
    int n[15];
    int maior, menor, p_maior, p_menor;
    int i;

    for (int j = 0; j < 15; j++) {
        printf("Digite o %d número:", j + 1);
        scanf("%d", &n[j]);
    }

    maior = n[0];
    menor = n[0];

    for (i = 1; i < 15; i++) {
        if (n[i] > maior) {
            maior = n[i];
            p_maior = i;
        }

        if (n[i] < menor) {
            menor = n[i];
            p_menor = i;
        }
    }
    printf("\nO maior número é %d e está na posição %d. \n", maior, p_maior);
    printf("O menor número é %d e está na posição %d. \n", menor, p_menor);

    return 0;
}