/* This program will implement the following pattern:

A
BB
CCC
DDDD

when n = 4 */

#include<iostream>
using namespace std;

int main(){

  int n;
  char c;

  cout<<"Enter n: ";
  cin>>n;

  for(int i = 0; i < n; i++){

    cout<<endl;
    c = 'A' + i;
    for(int j = 0; j <= i; j++){
      cout<<c;
    }
  }

  return 0;
}
