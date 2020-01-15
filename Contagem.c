/* Contagem regressiva */

#include <stdio.h>

int main (void) {

    int n,c;

    printf("Numero? ");
    scanf("%d", &n);

    printf("Contagem:");

    for(c = n; c >= 0; c--)
        printf("%d ",c);



    return 0;
}
