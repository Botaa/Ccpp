#include<iostream>



int main()
{
  int n,i,j,prim;
  //colectare date
  printf("Gasiti numerele prime cuprinse intre 1 si :");
  scanf("%d",&n);

  printf("Toate numerele prime dintre 1 si %d sunt:\n", n);

  //loop pentru a determina ce numar este prim
  for(i=2;i<=n;i++)
  {
    //prim este considerat drept numar prim
    prim = 1;

    //verificam daca numarul este prim sau nu
    for(j=2;j<=i/2;j++)
    {
      //daca numarul este divizibil cu orice numar inafara de 1 si acel numar ,acesta nu este prim
      if(i%j==0)
      {
        prim = 0;
        break;
      }
    }
    //daca numarul este prim atunci acesta este afisat
    if(prim == 1)
    {
      printf("%10d\n",i);
    }
  }
}
