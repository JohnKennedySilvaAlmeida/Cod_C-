//* infome o sinal - ou + */

#include <stdio.h>
//#include <math.h>

int main(void) {

    int n;

    printf("Numero:");
    scanf("%d", &n);

    if (n > 0) printf("Positivo\n");
    else  if(n < 0) printf("Negativo\n");
          else printf("Nulo\n");

    return 0;
}


