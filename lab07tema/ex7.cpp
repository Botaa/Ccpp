#include<stdio.h>

int main()
{
  int n,i;
  printf("Introduce-ti valoarea : ");
  scanf("%d", &n);
  //loop de la 1 la n
  for(i=1;i<=n/2;i++){
    //daca restul este 0 => i este divizor
    if(n%i==0)
      printf("%20d\n", i);
    }
}
