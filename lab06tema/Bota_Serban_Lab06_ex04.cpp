#include<iostream>
using namespace std;



void biti(unsigned char y);


int main(){
    unsigned char n;
    int j=0 ,y=n>>0;
    printf("Introduceti variabila: ");
    scanf("%hhu", &n);




  while(y){
    scanf("%hhu", &n);

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
