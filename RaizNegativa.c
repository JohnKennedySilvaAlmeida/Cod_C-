/* raiz de um numero negativo  */

#include <stdio.h>
#include <math.h>


int main(void) {

    float n,r;


    do {
        printf("Digite um numero negativo:");
        scanf("%f",&n);

    } while (n < 0);
    r = sqrt(n);
    printf("\nA raiz quadrada de %.1f e %.1f\n",n,r);

  return 0;
}
