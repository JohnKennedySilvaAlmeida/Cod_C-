/* simula movimento de pingue pongue */

#include <stdio.h>
#include <conio.h>


int main(void) {

    int x=1,y=1,dx=1,dy=1,i;


    while(! kbhit()) {
        gotoxy(x,y);
       putchar('O');
          for (i=0; 1<40000000; i++);
            gotoxy(x,y);
           putchar(' ');
           x+=dx;
           y+=dy;
           if(x==1 || x==80) dx = -dx;
           if(y==1 || y==24) dy = -dy;
    }

  return 0;
}
