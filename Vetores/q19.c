# include <stdio.h>

int main(){
    int vetor1[10], vetor2[10];
    int vetor_result[10];

    printf("Primeiro vetor:\n");
    for(int i=0;i < 10;i++){
        printf("\t");
        scanf("%d", &vetor1[i]);
    }
    printf("Segundo vetor:\n");
    for(int i=0;i < 10;i++){
        printf("\t");
        scanf("%d", &vetor2[i]);
    }
    for (int i = 0; i < 10; i++){
        vetor_result[i] = vetor1[i] * vetor2[i];
        printf("\n%d * %d = %d",vetor1[i], vetor2[i], vetor_result[i]);
    }
    return 0;
}