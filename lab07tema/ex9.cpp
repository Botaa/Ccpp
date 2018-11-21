#include<stdio.h>



int main(){
  int a,b,n,i;
  printf("introduceti a:");
  scanf("%d",&a);
  printf("introduceti b:");
  scanf("%d",&b);
  n = 0;
  while(a>=b){
    a = a - b;
    //n fiind numarul scaderilor lui b din a 
    n++;
  }
  printf("%d\n", n);
}
