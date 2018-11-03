#include<iostream>
using namespace std;


float a,b,c;
//prototip
void average();

int main(){
  printf("Introduceti 3 numere\n");
  printf("a = ");
  scanf("%f",&a);
  printf("b = ");
  scanf("%f",&b);
  printf("c = ");
  scanf("%f",&c);

average();

  return 0;
}
//functia pentru media aritmetica
void average(){
  float res = float(a+b+c)/3;
  printf("%f\n",res);
}
