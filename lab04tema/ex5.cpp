#include <iostream>
using namespace std;


//declaratie globala si prototip
int a,b,c;
void weightedsum();

int main(){
  cout<<"Introduceti 3 numere"<<endl;
  cout<<"a= ";
  cin>>a;
  cout<<"b= ";
  cin>>b;
  cout<<"c= ";
  cin>>c;
  weightedsum();

  return 0;
}

void weightedsum(){
  float res =float (a*0.2)+(b*0.3)+(c*0.5);
  printf("Suma ponderata este = %f\n",res);
}
