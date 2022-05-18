#include <stdio.h>

int ocorre(char c, int linha, int coluna, char mat[linha][coluna]){
  int count = 0;
  for(int i=0;i<linha;i++){
    for(int j=0;j<coluna;j++){
      if(mat[i][j] == c){
        count = count + 1;
      }
    }
  }
  return count;
}

char repete(int linha, int coluna, char mat[linha][coluna]){
  char rep = mat[0][0];
  for(int i=0;i<linha;i++){
    for(int j=0;j<coluna;j++){
      int r1 = ocorre(mat[i][j], linha, coluna, mat);
      int r2 = ocorre(rep, linha, coluna, mat);
      if(r1 > r2){
        rep = mat[i][j];
      }
    }
  }
  return rep;
}

void read_values(int rows, int cols, char mat[rows][cols]){
  for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
      scanf(" %c", &mat[i][j]);
    }
  }
}

int main(){

  int linha;
  int coluna;
  scanf("%d%d", &linha, &coluna);
  char mat[linha][coluna];
  read_values(linha, coluna, mat);
  char maior = repete(linha, coluna, mat);
  printf("%c\n", maior);
  return 0;
}