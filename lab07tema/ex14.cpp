#include<stdio.h>
#include<iostream>
#define MAX 100

int main(){
  //declaram un tablou
  int n,i,tab[MAX];

  printf("Cate numere vor fi:");
  scanf("%d",&n);
  //loop pentru a introduce in tablou toate numerele dorite
  for(i=0;i<n;i++){
    printf("\nintroduceti numarul %d: ",i+1);
    scanf("%d",&tab[i]);
  }
  //loop pentru a analiza fiecare valoare din tablou impartind la 2 , daca da rest ,numarul este impar
  printf("Numerele impare din string sunt:\n");
  for(i=0;i<n;i++){
    if(tab[i]%3 == 0)
      printf("\t%d\n",tab[i]);
  }
}//end main
