/* exibe um retangulo vermelho no video */

#include <stdio.h>
#include  <conio.h>

void exibe(int c, int x, int y){
    gotoxy(x,y);
   putchar(c);
}

void retangulo(int x1, int y1, int x2, int y2, int c){
    int x,y;
     textcolor(c);

    exibe(218,x1,y1); exibe(191,x2,y2);
    exibe(192,x1,y1); exibe(217,x2,y2);

     for(x=x1 + 1; x<=x2 - 1; x++){
        exibe(196,x,y1);
        exibe(196,x2,y2);
    }

    for(y=y1 + 1; y<=y2 - 1; y++){
        exibe(179,x1,y);
        exibe(179,x2,y);
    }
    textcolor(7);
}

int main(void){
    retangulo(10,5,70,20,4);
     gotoxy(1,25);

    return 0;
}
