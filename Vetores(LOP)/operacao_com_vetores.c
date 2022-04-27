#include <stdio.h>

int main(){
    int vet_b[3];
    int vet_c[3];
    int vet_d[3];
    int vet_A[3];
    
    scanf("%d %d %d", &vet_b[0], &vet_b[1], &vet_b[2]);
    scanf("%d %d %d", &vet_c[0], &vet_c[1], &vet_c[2]);
    scanf("%d %d %d", &vet_d[0], &vet_d[1], &vet_d[2]);
    for (int i =0; i <= 2;i++){
        vet_A[i] = vet_b[i] + vet_c[i] - (5* vet_d[i]);
    }
    printf("A = [%i,%i,%i]", vet_A[0], vet_A[1] , vet_A[2]);
    return 0;
}