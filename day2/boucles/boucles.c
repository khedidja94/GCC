#include <stdio.h>

int main() {
    printf("Boucle for :\n");
    for (int i = 0; i < 5; i++) {
         printf("i = %d\n", i);
    }

     printf("Boucle while :\n");
     int j = 0;
     while (j < 5) {
          printf("j = %d\n", j);
          j++;
     }

     printf("Boucle do...while :\n");
     int k = 0;
     do {
           printf("k = %d\n", k);
           k++;
     } while (k < 5);

      return 0;
}
