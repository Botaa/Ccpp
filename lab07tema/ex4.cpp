#include<iostream>


int main(){
  //declaram variabilele
  int n,i,res=1;
  printf("Introduceti un numar pentru a calcula factorialul acestuia: ");
  scanf("%d", &n);
  //loop , acesta inmulteste 1*2*3.... pana la n
  for(i=1;i<=n;i++){
    res *= i;
  }
  printf("%d! = %d\n",n , res);
}//end main
