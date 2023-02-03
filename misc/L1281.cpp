// Subtract Product and sum of numbers of an integer

#include<iostream>
using namespace std;

int main(){

  int n, s=0, p=1;

  cout<<"Enter n: ";
  cin>>n;
  
  while(n > 0){

    s += n%10;
    p*= n%10;
    n/= 10;
  }

  cout<<p-s;

  return 0;
}
