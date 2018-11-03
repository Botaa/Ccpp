#include <iostream>
using namespace std;

float a,b,c;
//propotip pentru functie
void functia();

int main(){
  cout<<"introduceti 3 numere"<<endl;
  cout<<"a= ";
  cin>>a;
  cout<<"b= ";
  cin>>b;
  cout<<"c= ";
  cin>>c;
  cout<<"rezultatul este:";
  functia();

  return 0;
}

void functia(){
  float res = float (1/a)+(1/b)+(1/c);
  cout<<res<<endl;
}
