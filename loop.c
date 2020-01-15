#include <stdio.h>
#include <conio.h>

int main(void) {

  int contador,i;         //  variável de controle do loop

  for(contador = 1; contador <= 10; contador++)   // crescente ++
  {
    printf("%d ", contador);
  }

  printf("|------------|");

  for (contador = 10; contador >= 1; contador--)   // decresente --
  {
    printf("%d ", contador);
  }

 // int i;    //variável de controle do loop**

  for (i = 1; i <= 3; i++)
  {
    printf("\nAprendendo Linguagem C\n");
  }


  getch();
  return(0);

}


