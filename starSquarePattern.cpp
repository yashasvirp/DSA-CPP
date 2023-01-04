/* This program will take input one number - n
and print a square of stars:
*****
*****
*****
*****
*****
if n = 5
... and so on */

#include<iostream>
using namespace std;


int main(){

  int n;
  
  cout<<"Enter n: ";
  cin>>n;


  for(int i = 1; i <= n; i++){
    cout<<endl;
    for(int j = 1; j <= n; j++)
      cout<<"*";
  }

  return 0;
}
