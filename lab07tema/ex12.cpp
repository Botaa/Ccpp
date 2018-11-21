#include<stdio.h>
#define MAX 100


int main(){
  int a,i,tab[MAX];
  float x , sum=0;
  printf("Introduceti un numar");
  scanf("%d",&a);
  for(i=1;i<=MAX;i++){
    printf("Introduceti numarul %d:", i);
    scanf("%f",&x);
    sum += x;
    if(sum >= a){
      printf("%.2f\n",sum);
      break;
    }
  }
  printf("%d\n", i);
}
