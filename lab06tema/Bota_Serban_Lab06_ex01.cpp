#include <iostream>
#include<math.h>
using namespace std;


int main(){
  int x,res;
  printf("Introduce-ti o variabila x: ");
  scanf("%d", &x);
  res = pow(x,3)+pow(x,2)+ x + 1;
  printf("Rezultatul polinomului este : ");
  printf("%d\n" ,res);

  return 0;
}
