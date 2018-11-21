#include <stdio.h>



int main(){
  int a,b,n=0,i;


  printf("introduceti a:");
  scanf("%d", &a);
  printf("introduceti b:");
  scanf("%d", &b);

  for(i=1;i<=b;i++)
    n += a;
  printf("%d\n",n);
}
