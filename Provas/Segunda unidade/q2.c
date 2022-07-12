#include <stdio.h>
#include <stdlib.h>

int * func(int * tamanho){
  char c;
  int count = 0;
  int * msg = NULL;
  int n = 0;
  scanf("%c", &c);
  while(count < 10 && (c == '0' || c == '1')){
    msg = (int*) realloc(msg, (n+1)*sizeof(int));
    msg[n] = c - '0';
    n += 1;
    if(c == '0'){
      count += 1;
    } else {
      count = 0;
    }
    scanf("%c", &c);
  }
  n -= 10;
  msg = (int*) realloc(msg, n*sizeof(int));
  *tamanho = n;
  return msg;
}

int main(){
  int n;
  int * vetor;
  vetor = func(&n);
  for(int i=0;i<n;i++){
    printf("%d", vetor[i]);
  }
  printf("\n");
  free(vetor);
  return 0;
}