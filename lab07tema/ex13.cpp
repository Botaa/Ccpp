#include<stdio.h>




int main(){
  int a,b,x,y;
  float cmmmc;
  printf("introduceti a:");
  scanf("%d",&a);
  printf("introduceti b:");
  scanf("%d",&b);
  x = a;
  y = b;
  while(a!=b){
    if(a>b)
      a = a-b;
    else
      b = b-a;
  }
  cmmmc = float((x*y)/a);
  printf("%.2f", cmmmc);

}
