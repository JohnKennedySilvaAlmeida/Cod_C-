/* caixa eletronico   */

#include <stdio.h>


int main(void) {

    float s = 1000.00, v;
    int op;

    do {
        puts("\n1 - Deposito");
        puts("2 - Saque");
        puts("3 - Saldo");
        puts("4 - Sair");
        scanf("%d",&op);

        switch(op){
            case 1 :printf("\nValor d deposito? ");
                    scanf("%f",&v);
                    s += v;
                break;
            case 2 :printf("\nValor d saque? ");
                    scanf("%f",&v);
                    s -= v;
                break;
            case 3 :printf("\nSaldo atual = R$ %.2f\n",s);
                break;
            default:if(op!=4) puts("\nOpcao invalida!");
        }


    } while (op != 4);
    puts("Fim das Transacoes");

  return 0;
}
