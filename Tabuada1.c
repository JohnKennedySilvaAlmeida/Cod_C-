/* Tabuada  */

#include <stdio.h>


int main(void) {

    int n,r,c;


    do {
        printf("Digite um numero entre 1 a 10? ");
        scanf("%d",&n);

    } while (n < 1 || n > 10);
    printf("\nTabudada do %d\n\n",n);

    for(c=1; c<=10; c++){
        r = n*c;
        printf("%d x %2d = %3d\n",n,c,r);
    }
  return 0;
}
