#include<iostream>
using namespace std;

int main(){
  int nota1,nota2;
  char nume1[20];
  char nume2[20];
  cout<<"Introduceti numele si nota"<<endl;
  cout<<"Nume Student1 : ";
  cin>>nume1;
  cout<<"Nota optinuta : ";
  cin>>nota1;
  cout<<"Nume Student2 : ";
  cin>>nume2;
  cout<<"Nota optinuta : ";
  cin>>nota2;
  printf("%20s",&nume1);
  printf("%20d\n",nota1);
  printf("%20s",&nume2);
  printf("%20d\n",nota2);

  printf("Media notelor : %.2f\n",float(nota1+nota2)/2);
  return 0;
}
