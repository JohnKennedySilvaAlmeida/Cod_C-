//426 -- refatorando

//2 - Copiar o conteúdo de um arquivo com algumas exceções
//Copie o conteúdo do arquivo 'exercício.txt', com exceção das linhas que começarem com 'Teste' para o arquivo /home/exercicio/novo.txt.
//Dica: 
//leia sobre o find e             !!!!!!!!string::npos!!!!!!!                 

#include <fstream>
#include <string>                                            // bibliotecas

using namespace std;                                        // espacos STD                  

int main() {
  fstream arqEn("/home/exercicio/exercicio.txt", ios::in);     // Abre IN - arquivo
  fstream arqSa("/home/exercicio/novo.txt", ios::out);         // criar OUT - arquivo  -> obs!!!!!!!                                               
  
  string line;                                                // var - linha 
  getline(arqEn, line);                                       // pegar linhas de arquivo entrada

  while (arqEn) {                                             // loop para varrer arquivo ""
    if (line.find("Teste") && std::string::npos != 0){       // procura "teste" ate o fim <-> Find = encontrar
      arqSa << line << endl;                                 // visualizar linhas
    }
    getline(arqEn, line);                                    // arquivos d entradas e linhas <->
  }
  arqEn.close();                                            // fehcar arquivos 
  arqSa.close();

  return 0;
}

/* OBS!

std :: string :: npos...

npos é um valor constante de membro estático com o maior valor possível para um elemento do 
tipo size_t. Este valor, quando usado como o valor para um parâmetro len (ou sublen) nas funções 
de membro da string, significa "até o final da string".
Como valor de retorno, geralmente é usado para indicar nenhuma correspondência.

*/