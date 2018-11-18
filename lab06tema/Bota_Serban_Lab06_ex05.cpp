#include <iostream>
#include <bitset>
using namespace std;


int main(){
  int num,count=0,Zero,count1=0;
  cout<<"Enter the number ";
  cin>>num;
  string binary;
  binary = bitset<8>(num).to_string();
  int k;
  cout<<"The binary conversion of  "<<num<<" is "<<binary<<endl;
  while(num>0){
    num = num & (num-1);
    count++;
  }
  cout<<"The number of 1's in this binary number is : "<<count<<endl;
  Zero = 8 - count;
  cout<<"The number of 0's in this binary number is: "<<Zero<<endl;

}
