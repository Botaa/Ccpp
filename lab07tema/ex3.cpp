#include<iostream>
#include<math.h>


/*
int main(){
  int a = 2 , n ,res;

  scanf("%d",&n);
  res = pow(a,n);
  printf("%d",res);
}
*/

int main(){
  int a = 2 , n ,i;
  int res;
  printf("La ce putere doriti sa ridicati numarul 2 :");
  scanf("%d", &n);
  res = a;
  //loop
  for(i=1;i<n;i++){
    res *= a;
  }
  printf("2 la puterea %d = %d\n",n,res);
}
