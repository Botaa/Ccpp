#include <iostream>
using namespace std;

int r1,r2;

void rez_ec_serie();

void rez_ec_paralel();



int main(){
  cout<<"introduceti doua valori pentru rezistente!"<<endl;
  cout<<"r1=";
  cin>>r1;
  cout<<"r2=";
  cin>>r2;

  rez_ec_serie();
  rez_ec_paralel();

  return 0;
}
void rez_ec_serie(){
  int rec = r1 + r2;
  cout<<"Rec=";
  cout<<rec<<endl;

}

void rez_ec_paralel(){
  float rs=float(r1*r2)/(r1+r2);
  cout<<"Rep=";
  cout<<rs<<endl;
}
