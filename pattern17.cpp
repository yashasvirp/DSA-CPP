/* This program displays the following pattern:
A
BC
CDE
DEFG

if n = 4 */

#include<iostream>
using namespace std;

int main(){

  int n;
  char c;

  cout<<"Enter n: ";
  cin>>n;

  for(int i = 0; i < n; i++){

    cout<<endl;
    
    for(int j = 0; j <= i; j++){
      c = 'A' + j + i;
      cout<<c;
    }
  }

  return 0;
}
