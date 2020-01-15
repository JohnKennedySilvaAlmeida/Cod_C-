//#include <conio.h>
#include <stdio.h>

int main(){  // OBS -  MAIN

    int i = 1;                  // Declaração e inicialização

    while(i <= 10){             // Expressão lógica
        printf("%d ", i++);       // Comando 1: escreve o número na tela
         i++;                     // Comando 2: Incrementação do i
    }

    getchar();
    return 0;

}
