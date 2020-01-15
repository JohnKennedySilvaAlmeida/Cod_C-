/* media alunos */

#include <stdio.h>

int main(void) {

    float a,b,c;

    printf("Notas ? \n");
    scanf("%f %f", &a, &b);

    c = (a+b)/2;

    printf("Medias = %.1f\n",c);

    if (c >= 6.0) printf("Aprovado");
    else printf("Reprovado");

    return 0;
}
