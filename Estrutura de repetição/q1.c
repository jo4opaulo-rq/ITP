#include <stdio.h>

int main(void) {
  for (int count = 0; count <= 4; count++) {
    int a, b, c, d;
		printf("GRUPO %d \nINSIRA SEU VALORES ABAIXO: \n", count+1);

   
    scanf("%d %d %d %d", &a, &b, &c, &d);
		
    printf("Ordem lida: %d %d %d %d \n", a, b, c, d);
		
    // mostra ordem lida (DONE)
		
    if (a > d) {
      int temp = a;
      a = d;
      d = temp;
    }

		if (a > b) {
      int temp = a;
      a = b;
      b = temp;
    }

		if (a > c) {
      int temp = a;
      a = c;
      c = temp;
    }

		if (b > c) {
      int temp = b;
      b = c;
      c = temp;
    }

		if (c > d) {
      int temp = c;
      c = d;
      d = temp;
    }

		if (b > c) {
      int temp = b;
      b = c;
      c = temp;
    }

    // ORDEM CRESCENTE
    printf("Crescente: %d %d %d %d \n", a, b, c, d);
		// ORDEM DECRESCENTE
		printf("Decrescente: %d %d %d %d \n", d, c, b, a);
    

  }
	
  return 0;
}