#include<iostream>
#include<math.h>
using namespace std;


int a, b, c;
int s;
void aria();

int main(){
  printf("Introduceti Lungimile laturilor triunghiului!\n");
  printf("AB= ");
  scanf("%d", &c);
  printf("BC= ");
  scanf("%d", &a);
  printf("AC= ");
  scanf("%d", &b);
  printf("Aria triunghiului este egala cu :");

  aria();

  return 0;
}

void aria(){
  int p = (a+b+c)/2;
  s = sqrt(p*(p-a)*(p-b)*(p-c));
  printf("%d", s);
}
