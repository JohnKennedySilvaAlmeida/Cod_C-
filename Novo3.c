//#include <conio.h>
#include <stdio.h>

int main(){  // OBS -  MAIN

    int i = 1;                  // Declara��o e inicializa��o

    while(i <= 10){             // Express�o l�gica
        printf("%d ", i++);       // Comando 1: escreve o n�mero na tela
         i++;                     // Comando 2: Incrementa��o do i
    }

    getchar();
    return 0;

}
