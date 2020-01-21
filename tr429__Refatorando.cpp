// 429 - refatorando

/*5 - Ler um arquivo e imprimir o conteúdo em tela

Abrir um arquivo e imprimir o conteúdo dele na tela. 

Passar por parâmetro em linha de comando o nome do arquivo e o número de linhas que deseja imprimir.

Dica: leia sobre cout.*/

#include <fstream>
#include <iostream>                                // bibliotecas 
#include <string>


using namespace std;                               // espços - usando - std
              
int main(int argc,char *argv[]){

    int cont = 0;                                     // vars 
    int lin = atoi(argv[2]);                        // posição <- Atoi -> converte strings em números inteiros.

    string line;                                  // vars
    arq.open(fname.c_str(), ios::in);               // abrir arquivo - modo leitura - IN || 
    getline(arq, line);                            // pegar linhas do arquivo

    while (arq && cont <= lin){                 // loop varre arquivo
        cout << line << endl;                   // visualizar
        cont++;                                 // contador
        getline(arq, line);                     // pegar linhas arquivo
    }
    arq.close();                                 // fechar arquivo

    exit(0);      // ou retun
} 


/*
c_str() - OBS!!
Obter o equivalente da string C
Retorna um ponteiro para uma matriz que contém uma sequência de caracteres terminada em 
nulo (ou seja, uma string C) representando o valor atual do objeto de string.*/