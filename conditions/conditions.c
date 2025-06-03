#include <stdio.h>

int main() {
  int x;
  printf("Entrez un entier : ");
  scanf("%d", &x);

  if (x > 0) {
      printf("Positif\n");
  } else if (x < 0) {
      printf("Négatif\n");
  } else {
      printf("Zéro\n");
  }

   return 0;
}

