/* desenhar um xadrez */

#include <stdio.h>
#include <conio.h>

int main (void) {

    int n,c,l;

    printf("Numero? ");
    scanf("%d", &n);

    for(l = 1; l <= n; l++){
       for(c = 1; c <= n; c++) {
           textcolor((l+c)%2+1);
         putchar(219);
       }
       printf("\n");
    }

  return 0;

}
