//425 ->> refatorado

//1 - Criar um arquivo com conteúdo..
//Crie um arquivo com nome 'exercicio.txt' dentro do diretório ‘/home/exercicio/’ com o seguinte conteúdo:

#include <iostream>                // bibliotecas 
#include <fstream>

using namespace std;               // usando espaço STD         

int main () {                   
  fstream myfile("/home/exercicio/exercicio.txt", ios::out);    // Criar e escreve em arquivo txt

  if (myfile.is_open()) {                                      // Retorna se o fluxo está atualmente associado a um arquivo.
    myfile << "Teste11" << endl
    << "Frase_teste" << endl
    << "Teste2" << endl
    << "XXavg22" << endl                       
    << "54ggg|_aa" << endl
    << "Teste13" << endl
    << "Xicara" << endl
    << "Desenvol" << endl
    << "Teste15" << endl                               // insere dados no arquivo
    << "Software" << endl
    << "Teste100" << endl;
    myfile.close();                                   // fechar arquivo
  }
  else cout << "Impossível abrir o ficheiro";         // tratar erro 

  return 0;
}

/*Nome
Teste11
Frase_teste
Teste2
O_Teste_22
XXavg12
54ggg|_aa
Teste13
Xicara
Desenvolvedor
Teste15
Software
Bicicleta
Teste100*/