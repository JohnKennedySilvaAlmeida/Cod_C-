/* Salario pago a um funcionario */

#include <stdio.h>
//#include <math.h>

int main(void) {

    float h,s,d;

    printf("Horas:");
    scanf("%f", &h);

    s = 19.50*h;

    if (s > 2500.00) {
        d = 0.25*s;
        printf("Desconto = R$ %.2f\n", d);
        s = s - d;
    }

    printf("Salario = R$ %.2f\n", s);

    return 0;
}
