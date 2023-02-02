/* This program reverses a given number */

#include<iostream>
using namespace std;

int main(){

  int n, rem, rev = 0;

  cout<<"Enter n: ";
  cin>>n;

  
  while(n > 0){

    rem = n%10;
    rev = rev*10 + rem;
    n /= 10;
  }

  cout<<endl<<rev<<endl;

  return 0;

}
