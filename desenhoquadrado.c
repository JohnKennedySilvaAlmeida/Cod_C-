/* desenhar um quadrado */

#include <stdio.h>

int main (void) {

    int n,c,l;

    printf("Numero? ");
    scanf("%d", &n);

    for(l = 1; l <= n; l++) {
       for(c = 1; c <= n; c++)
           printf("%c",219);
       printf("\n");
    }

    return 0;
}
