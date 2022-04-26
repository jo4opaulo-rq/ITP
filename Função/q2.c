#include <stdio.h>

int segundos(int h, int m, int seg){
    int resultado;
    resultado = ((h * 3600) + (m * 60) + seg);
    return resultado;
}
int main(){
    int h, m, seg, resultado;
    printf("Informe a hora ex: 00h00m00s: ");
    scanf("%ih%imin%is", &h, &m, &seg);
    resultado = segundos(h, m, seg);
    printf("%ih%imin%is equivale %i segundos", h, m, seg, resultado);
    return 0;
}
