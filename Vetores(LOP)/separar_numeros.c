#include <stdio.h>

int main(){
    int vetor_1[20];
    int vetor_div_3[];
    

    
    for (int i = 0;i<20;i++){
        scanf("%d", &vetor_1[i]);
    }
    for (int i = 0;i<20;i++){
        if (vetor_1[i] % 3 == 0){
            vetor_div_3[i] += vetor_1[i] ;

        }
    }

    
    
    printf("%d",vetor_div_3[0]);
    

}