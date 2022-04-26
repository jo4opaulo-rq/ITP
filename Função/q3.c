#include <stdio.h>

int divisor(int n1, int n2){
    int proximo = 0;
    if (n1 % n2 == 0){
        printf("0");
    }
    else{
        for (int i = n2;i<=n1;i++)
        if (n1 % i == 0)
        {
            proximo++;
        
        }
        
        printf(proximo);
    }
    return 0;
}
int main(){
    int n1, n2, verificar;
    scanf("%i%i", &n1, &n2);
    divisor(n1, n2);
}
