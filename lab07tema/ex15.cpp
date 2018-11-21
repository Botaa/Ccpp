#include<stdio.h>



int main(){
  int i,j,n;
  char a;
  printf("introduce-ti un caracter: ");
  scanf("%c",&a);
  printf("introduceti numarul de linii si coloane: ");
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      printf("%c ",a);
    }
    printf("\n");
}
}
