#include<iostream>
using namespace std;

int c1,c2;

void cap_ec_serie();

void cap_ec_paralel();

int main(){
  cout<<"Introduceti doua valori pentru capacitati!"<<endl;
  cout<<"c1= ";
  cin>>c1;
  cout<<"c2= ";
  cin>>c2;

  cap_ec_serie();
  cap_ec_paralel();

  return 0;
}

void cap_ec_serie(){
  int res_serie = c1+c2;
  cout<<"Res_Serie= ";
  cout<<res_serie<<endl;
}
void cap_ec_paralel(){
  float res_paralel=float(c1*c2)/(c1+c2);
  cout<<"Res_Paralel= ";
  cout<<res_paralel<<endl;
}
