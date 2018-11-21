#include<stdio.h>





int main()
{
  int a,b;
  printf("c.m.m.d.c intre a si b \n");
  printf("a = ");
  scanf("%d", &a);
  printf("b = ");
  scanf("%d", &b);

  while(a!=b)
  {
    if(a>b)
      a=a-b;
    else
      b=b-a;
  }
  printf("c.m.m.d.c = %d ", a);
}
