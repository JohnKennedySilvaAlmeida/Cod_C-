/* media de alunos */

#include <stdio.h>


void maior(float a, float b){

   if(a>b) return a;
   else return b;
}

void media(float a, float b){

    float c;
    c = (a+b)/2;
    return c;
}

int main(void){
    float p1,p2,t1,t2,m;

    printf("Provas? ");
    scanf("%f %f",&p1,&p2);
    printf("Trabalhos? ");
    scanf("%f %f",&t1,&t2);

    m = (media( maior(p1,p2), maior(t1,t2) ) );

    printf("\nMeida = %.1f\n",m);

    return 0;
}
