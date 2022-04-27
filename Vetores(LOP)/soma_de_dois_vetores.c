#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int vetor_a[n];
    int vetor_b[n];
    int soma[n];
    int cont_a =0;
    int cont_b =0;
    
    if (n<=10){
        while(cont_a<n){
            scanf("%d", &vetor_a[cont_a]);
            cont_a++;
            }
        while(cont_b<n){
            scanf("%d", &vetor_b[cont_b]);
            cont_b++;
            }
        for (int i =0;i<n;i++){
        soma[i]= vetor_a[i] + vetor_b[i];
        printf("%d ",soma[i]);
        }
    }
    else{
        printf("Muitos elementos");
    }
}