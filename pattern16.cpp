/* This program displays the following pattern:
A
BC
DEF
GHIJ

if n = 4 */

#include<iostream>
using namespace std;

int main(){

  int n, count = 0;
  char c;

  cout<<"Enter n: ";
  cin>>n;

  for(int i = 0; i < n; i++){

    cout<<endl;

    for(int j = 0; j <= i; j++){
      c = 'A' + count++;
      cout<<c;
    }
  }

  return 0;
}
  
