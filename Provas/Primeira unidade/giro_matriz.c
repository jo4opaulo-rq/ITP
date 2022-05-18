#include <stdio.h>

void read_values(int rows, int cols, int mat[rows][cols]){
  for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
      scanf("%d", &mat[i][j]);
    }
  }
}

void print_values(int rows, int cols, int mat[rows][cols]){
  for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
      printf("%d ", mat[i][j]);
    }
    printf("\n");
  }
}

void rot(int n, int mat[n][n]){
  // nova matriz rotacionada
  int res[n][n];
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      // rotação
      res[i][j] = mat[n-j-1][i];
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      // atualização da matriz mat
      mat[i][j] = res[i][j];
    }
  }
}


int main(void) {
  int n;
  
  scanf("%d", &n);
  // criação da matriz depois de obter o n
  int mat[n][n];
  
  read_values(n, n, mat);
  // chamada da função de giro
  rot(n, mat);
  printf("\n");
  print_values(n, n, mat);
  
  return 0;
}