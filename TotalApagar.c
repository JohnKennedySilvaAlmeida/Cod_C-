/* calcula o total a ser pago */

#include <stdio.h>

int main (void) {

    float t = 0, v;

    while(1) {
          printf("Valor? ");
          scanf("%f",&v);

          if(v <= 0)break;
          t += v;
    }
    printf("\nTotal: R$ %.2f\n",t);

  return 0;

}
