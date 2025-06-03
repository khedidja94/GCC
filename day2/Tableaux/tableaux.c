#include <stdio.h>

int main() {
    int tableau[5] = {1, 2, 3, 4, 5};

    printf("Contenu du tableau :\n");
    for (int i = 0; i < 5; i++) {
         printf("Element %d: %d\n", i, tableau[i]);
    }

    return 0;
}

