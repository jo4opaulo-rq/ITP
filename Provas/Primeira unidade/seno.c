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
  double alt = 1.0;
  for(int i=0;i<n;i++){
    // expressão do enunciado
    seno = seno + alt / fat(2*i+1) * pot(x, 2*i+1);

    // outra forma
    //seno += pot(-1,i) / fat(2*i+1) * pot(x, 2*i+1);
    
    if(alt == 1){
      alt = -1;
    } else {
      alt = 1;
    }
  } 
  printf("%.2lf", seno);
  return 0;
}