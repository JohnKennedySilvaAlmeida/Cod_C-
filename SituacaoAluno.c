//* situacao do aluno */

#include <stdio.h>
//#include <math.h>

int main(void) {

    float m;
    int f;

    printf("Media:");
    scanf("%f", &m);
    printf("Faltas:");
    scanf("%d", &f);

    if (f <= 40)
        if (m >= 6.0) printf("Aprovado\n");
        else printf("Recuperacao\n");
    else printf("Reprovado\n");


    return 0;
}

