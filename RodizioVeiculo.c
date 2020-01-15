//* rodizio de carro*/

//#include <ctype.h>
#include <stdio.h>
//#include <math.h>

int main(void) {

    int f,p;

    printf("Placa:");
    scanf("%d", &p);

    f = p % 10;

    printf("Rodizio: ");

    /*if (f == 1 || f == 2) printf("Segunda\n");
    else  if(f == 3 || f == 4) printf("Terca\n");
          else  if(f == 5 || f == 6) printf("Quarta\n");
                else  if(f == 7 || f == 8) printf("Quinta\n");
                      else printf("Sexta\n");*/

    // outra forma
     switch(f) {
        case 1: case 2: printf("Segunda\n"); break;
        case 3: case 4: printf("Terca\n"); break;
        case 5: case 6: printf("Quarta\n"); break;
        case 7: case 8: printf("Quinta\n"); break;
        case 9: case 0: printf("Sexta\n"); break;
     }

    return 0;
}
