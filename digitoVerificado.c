/* calcula digitos veficados  */

#include <stdio.h>

int main (void) {

    int n,r,s,d;

    printf("Numero? ");
    scanf("%d", &n);

    s = 0;

    while(n > 0) {
          r = n % 10;
          n /= 10;
          s += r;
    }

    d = s % 10;
    printf("DV = %d\n",d);

  return 0;

}
