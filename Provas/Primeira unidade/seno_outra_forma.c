#include <stdio.h>

// valor de x!
int fat(int x){
  int fat = 1;
  for(int i=x; i>=1 ;i--){
    fat = fat * i;
  }
  return fat;
}

// valor de x^e
float pot(float x, int e){
  int res = 1;
  for(int i=0;i<e;i++){
    res = res * x;
  }
  return res;
}

int main(){

  int n;
  double x;
  
  scanf("%d%lf", &n, &x);

  double seno = 0; // somatório inicia em 0
  int um = 1;
  // passando pelos ímpares
  for(int i=1;i<=2*n;i+=2){
    // expressão do enunciado
    // cast (double) é necessário para divisão já que os operandos são inteiros
    seno += (double) um / fat(i) * pot(x, i);
    um = -um;
  } 
  printf("%.2lf", seno);
  return 0;
}
