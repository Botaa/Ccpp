#include <iostream>
using namespace std;
/*

int main(){
  int binar[10],lungime;
  int i;
  unsigned char n;
  for(int j = 1; j<=8;j++){
    binar[j] = 0;
  }
  scanf("%c", &n);
  i=0;
  while(n>0)
  { i++;
    binar[i]=n%2;
    n/=2;

  }
   for(i=8; i>0; i--){
     cout<<binar[i];

   }
}
*/

void biti(unsigned char y); //prototip

int main (){
  unsigned char n;
  printf("Introduceti variabila: ");
  scanf("%hhu", &n);

  int j=0 ,y=n>>0;
  while(y){
    printf("%hhu shiftare %d este: ",n,j);
    biti(y);
    y=n>>j;
    j++;
  }
return 0;
}
void biti(unsigned char y){
  int j;
  for(j = (sizeof(char)*8)-1;j>=0;j--){
    if(y &(1u<<j))
    {
      printf("1");
    }
    else{
      printf("0");
    }

  }
  printf("\n");
}
