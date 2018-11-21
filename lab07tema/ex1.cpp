#include <iostream>
#include<math.h>



int a,b;
float c;
//prototipuri
void aria();
void diagonala();
//main
//colectare date ...etc
int main(){
  printf("Introduceti lungimea(a) dreptunghiului: ");
  scanf("%d", &a);
  printf("Introduceti latimea(b) dreptunghiului: ");
  scanf("%d", &b);
  printf("Introduceti o potentiala diagonala(c) a dreptunghiului: ");
  scanf("%f", &c);

  aria();
  diagonala();
  return 0;
}
//functie pentru arie
void aria(){
  int s = a*b;
  printf("Aria dreptunghiului este :%d\n", s);
}
//functie pentru a afla diagonala dreptunghiului cu ajutorul teoremei lui pitagora
void diagonala(){
  if(c = sqrt(pow(a,2)+pow(b,2))){
    printf("Valoare pentru diagonala(c) este corecta!\n");
  }
  else{
    c = sqrt(pow(a,2)+pow(b,2));
    printf("Diagonala introdusa este gresita , aceasta este egala cu : %.2f", c);
}
}
