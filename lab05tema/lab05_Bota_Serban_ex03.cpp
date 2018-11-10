#include<iostream>
#include<math.h>
using namespace std;

int cateta1,cateta2;
float ipotenuza;

void afla_ipotenuza();
void afla_perimetru();

int main(){
  cout<<"Specificati lungimile catetelor intr-un triunghi dreptunghic!"<<endl;
  cout<<"Cateta(1)= ";
  cin>>cateta1;
  cout<<"Cateta(2)= ";
  cin>>cateta2;

  afla_ipotenuza();
  afla_perimetru();

}
void afla_ipotenuza(){
  ipotenuza = sqrt(cateta1^2+cateta2^2);
  printf("Lungimea ipotenuzei este egala cu %f cm\n",ipotenuza);
}
void afla_perimetru(){
  float perimetru = ipotenuza+cateta1+cateta2;
  cout<<"Perimetrul triunghiului este de ";
  cout<<perimetru;
  cout<<" cm"<<endl;
}
