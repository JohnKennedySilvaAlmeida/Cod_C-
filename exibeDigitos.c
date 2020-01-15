/* exibi digitos do numero inteiro */

#include <stdio.h>

int main (void) {

    int n,r;

    printf("Numero? ");
    scanf("%d", &n);

    printf("Digitos:\n");

    while(n > 0) {
          r = n % 10;
          n = n / 10;
          printf("%d\n",r);
    }

  return 0;

}
