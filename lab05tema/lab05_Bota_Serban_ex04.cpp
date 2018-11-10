#include<iostream>
#include<math.h>

using namespace std;

int a,b;

int main(){
  cout<<"a si b sunt coeficientii ecuatiei ax+b=0!"<<endl;
  cout<<"introduceti a si b pentru a rezolva ecuatia"<<endl;
  cout<<"a= ";
  cin>>a;
  cout<<"b= ";
  cin>>b;
  if(a==0){
    cout<<"a trebuie sa fie diferit de 0"<<endl;
  }
  printf("\n %dx + %d =0 iff x= %.2f\n",a ,b ,float(-b)/a);
  return 0;
}
