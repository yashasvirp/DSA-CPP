// Count number of 1s in an integer

#include<iostream>
using namespace std;

int main(){

  int n, count = 0;

  cout<<"Enter n: ";
  cin>>n;

  while(n != 0){

    if(n&1)
      count++;

    n = n >> 1; //right shift each bit

  }

  cout<<count<<endl;

  return 0;
}
