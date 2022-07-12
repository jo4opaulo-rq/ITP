#include <stdio.h>

int tamanho(char str []){
  int count = 0;
  while(str[count] != '\0'){
    count += 1;
  }
  return count;
}

int main(void) {
  char num1 [256];
  char num2 [256];
  char res [257];

  scanf("%s", num1);
  scanf("%s", num2);

  int n1 = tamanho(num1) -1;
  int n2 = tamanho(num2) -1;

  int max = n1;
  if(n2 > n1){
    max = n2;
  }
  res[max+1] = '\0';

  int carry = 0;
  for(int i=max;i>=0;i--){
    int a = 0;
    int b = 0;
    if(n1 >= 0){
      a = num1[n1] - '0';
      n1 -= 1;
    }
    if(n2 >= 0){
      b = num2[n2] - '0';
      n2 -= 1;
    }
    int partial = a + b + carry;
    if(partial > 9){
      carry = 1;
      partial = partial % 10;
    } else {
        carry = 0;
    }
    res[i] = partial + '0';
  }
  
  if(res[0] == 0){
    printf("%s", res + 1);
  } else {
    printf("%s", res);
  }
  return 0;
}
