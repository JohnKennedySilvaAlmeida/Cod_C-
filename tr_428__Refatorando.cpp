// tr 428 refatorando

//4 - Verificar se determinado diretório existe

#include <stdio.h>
#include <stdlib.h>
#include <iostream>                                // bibliotecas

using namespace std;                              // usando espaços std

int main(int argc, char *argv[]) {
  
  FILE *p;
  p = fopen(argv[1],"r");  //fopen: Abre o arquivo especificado no caminho, retornando um pointeiro FILE que pode ser 
                            //utilizado para escrever, ler e efetuar operações em cima desse arquivo.
  if (p == NULL){                                       // verificar se arquivo existe 
    cout << "O diretorio? " << argv[1] << " não existe " << endl;  // obs!! [] posição
    exit(0);                                              // ou return
  }else{
    cout << "O diretorio! " << argv[1] << " existe " << endl;
  }
 // p.close();                                              //fechar

}
