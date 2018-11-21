/*#include<stdio.h>
#include<stdlib.h>
#define ESC 27


int main(){
  _getc();
  char ch;
  do{
    ch = _getc();
    switch(ch)
    {
      case ESC:
        break;
    }
  }

}
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <iostream>
int main()
{
    char k;

    k=_getch();

    if(k==27){
       printf("ESC pressed.\n");
       break;
     }
  _getch();
  return 0;
}
