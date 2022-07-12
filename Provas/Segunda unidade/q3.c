#include <stdio.h>

typedef enum { true = 1, false = 0 } Bool;

typedef char String[256];

typedef struct {
  String title;
  String author1;
  String author2;
  String author3;
  int year;
  int pages;
  Bool status;
  float value;
  Bool show; // 1 - exibir, 0
} Book;

int cmp(char a[], char b[]) {
  int index = 0;
  while (a[index] == b[index] && a[index] != '\0' && b[index] != '\0') {
    index += 1;
  }
  return a[index] == '\0' && b[index] == '\0';
}

int main() {

  int n;
  scanf("%d", &n);
  Book books[n];
  for (int i = 0; i < n; i++) {
    scanf(" %[^\n]", books[i].title);
    scanf(" %[^\n]", books[i].author1);
    scanf(" %[^\n]", books[i].author2);
    scanf(" %[^\n]", books[i].author3);
    scanf(" %d", &books[i].year);
    scanf(" %d", &books[i].pages);
    String s;
    scanf(" %s", s);
    if (cmp(s, "interno")) {
      books[i].status = false;
    } else {
      books[i].status = true;
    }
    scanf(" %f", &books[i].value);
    books[i].show = false;
  }

  String campo;
  scanf(" %[^\n]", campo);
  while (campo[0] != '*' || campo[1] != '\0') {
    if (campo[0] == 'A') {
      for (int i = 0; i < n; i++) {
        if (cmp(books[i].author1, campo + 6)) {
          books[i].show = true;
        }
        if (cmp(books[i].author2, campo + 6)) {
          books[i].show = true;
        }
        if (cmp(books[i].author3, campo + 6)) {
          books[i].show = true;
        }
      }
    } else {
      for (int i = 0; i < n; i++) {
        if (cmp(books[i].title, campo + 7)) {
          books[i].show = true;
        }
      }
    }
  }

  for (int i = 0; i < n; i++) {
    if (books[i].show && books[i].status) {
      printf("%s\n", books[i].title);
      printf("%s\n", books[i].author1);
      printf("%s\n", books[i].author2);
      printf("%s\n", books[i].author3);
      printf("%d\n", books[i].year);
      printf("%d\n", books[i].pages);
      if (books[i].status) {
        printf("livre\n");
      } else {
        printf("interno\n");
      }
      printf("%f\n", books[i].value);
      printf("\n");
    }
  }

  return 0;
}