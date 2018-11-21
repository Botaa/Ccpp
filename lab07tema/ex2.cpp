#include<iostream>
#include<math.h>

//declaram 2 variabile pentru numar si pentru radacina
int main(){//start main
  int nr, i;
  int sq;
  printf("\nIntroduce-ti un numar: ");
  scanf("%d",&nr);
  //verificam daca fiecare numar de la 0 pana la nr ridicat la patrat este egal cu numarul introdus
  for(i=0;i<=nr;i++){
    if(nr == i*i){
      printf("Numarul %d este patrat perfect\n", nr);
      //pentru a face uz de libraria math.h
      sq = sqrt(nr);
      printf("Radacina patrata a lui %d este %d\n", nr,sq);
      //daca conditia este indeplinita , return 0 si se opreste aici
      return 0;
    }
    }
    //un "else" in afara loop-ului
    printf("Numarul nu este patrat perfect\n");
    return 0;
  }//end main
