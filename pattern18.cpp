/* This program displays the following:

D
CD
BCD
ABCD

if n = 4 */

#include<iostream>
using namespace std;

int main(){

  int n, count = 0;
  char c;

  cout<<"Enter n:";
  cin>>n;

  for(int i = n-1; i >= 0; i--){

    cout<<endl;

    for(int j = i; j < n; j++){
      c = 'A' + j;
      cout<<c;
    }
  }

  cout<<endl;
  return 0;
}
