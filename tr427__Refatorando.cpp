// tr 427 - refatorando 

// 3 - Verificar se determinado arquivo existe!!

#include <stdio.h>
#include <stdlib.h>
#include <iostream>                                           // bibliotecas

using namespace std;                                           // espaços STD - Usando 

int main(int argc, char *argv[]) {                              // arry - char

  FILE *p;                                                     // Abrindo arquivo 
  p = fopen(argv[1], "r");                                    // verificar se arquivo existe - posição 

  if (p == NULL){
    cout << "O arquivo? " << argv[1] << " não existe " << endl;   // obs!!! [] posição
    exit(0);                                                      // ou return !!
  }else{
    cout << "O arquivo! " << argv[1] << " existe " << endl;
  }
 // p.close();                                                      // fechar

}

/*OBS!!
fopen() -> Esta é a função de abertura de arquivos. Seu protótipo é
fputs() -> Escreve uma string num arquivo.
fclose() -> Fecha o arquivo.

Dicas -> https://terminalroot.com.br/2014/12/linguagem-c-utilizando-as-funcoes-fopen.html
*/
