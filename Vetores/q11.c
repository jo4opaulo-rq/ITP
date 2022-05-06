#include <stdio.h>

int main() {
    int n[10], pares[10], impares[10];
    int i, p1 = 0, p2 = 0;

    for (i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &n[i]);

        if (n[i] % 2 == 0) {
            pares[p1] = n[i];
            p1++;
        } 
        else {
            impares[p2] = n[i];
            p2++;
        }
    }

    printf("\nPares digitados: ");
    for (i = 0; i < p1; i++) {
        printf("%d", pares[i]);
        if (i != (p1 -1)){
            printf(", ");
        }
    }
    printf("\nImapres digitados: ");
    for (i = 0; i < p2; i++) {
        printf("%d", impares[i]);
        if (i != (p2 -1)){
            printf(", ");
        }
    }
    printf("\n");
}