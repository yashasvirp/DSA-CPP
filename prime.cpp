/* This program tells if a number is prime or not. */

#include<iostream>
using namespace std;

int main(){

  int n;

  cout<<"Enter n: ";
  cin>>n;

  if(n == 2 || n == 3){
    cout<<"\nThe number is prime\n";
    return 0;
  }
  
  for(int i = 2; i <= n/2; i++)
    if(n%i == 0){
      cout<<"\nThe number is not prime\n";
      return 0;
    }

  cout<<"\nThe number is prime\n";

  return 0;

}
