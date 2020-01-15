//* infome seu sexo*/

#include <ctype.h>
#include <stdio.h>
//#include <math.h>

int main(void) {

    char s;

    printf("Sexo:");
    scanf("%c", &s);

    /*if (s =='M') printf("Maculino\n");
    else  if(s == 'F') printf("Feminino\n");
          else printf("Invalido\n");

    // outra forma
    if (s == 'm' || s == 'M') printf("Masc\n");
    else  if (s == 'F' || s == 'f') printf("Femi\n");
          else printf("Invalido\n");

    // outra forma
    switch(s) {
        case 'M': printf("Masc\n"); break;
        case 'F': printf("Femi\n"); break;
        default: printf("Invalido\n"); break;
    }*/

    // outra forma <ctype> M ou m
    switch(toupper(s)) {
        case 'M': printf("Masc\n"); break;
        case 'F': printf("Femi\n"); break;
        default: printf("Invalido\n"); break;
    }



    return 0;
}
