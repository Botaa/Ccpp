#include <iostream>
#include <math.h>

//declaram global a si b
int a,b;
//prototip pentru functie
void media_geometrica();

int main(){
  printf("Introduceti doua numere intregi\n");
  printf("a = ");
  scanf("%d",&a);
  printf("b = ");
  scanf("%d",&b);
  media_geometrica();

  return 0;
}
//funcia pentru media geometrica
void media_geometrica(){
  float res = sqrt(a*b);
  printf("Media geometrica = ");
  printf("%f\n",res);
}
