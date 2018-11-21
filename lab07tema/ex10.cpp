#include<stdio.h>


int main(){
  int a,n=0;
  scanf("%d",&a);
  while(a!=0){
    //imparte de n ori pana catul este 0
    a = int(a/10);
    n++;
  }
  printf("%d\n",n);





}
