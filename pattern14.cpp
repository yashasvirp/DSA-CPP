/* This program will print
ABC
BCD
CDE

if n = 3 */

#include<iostream>
using namespace std;

int main(){

  int n;

  char c;
  
  cout<<"Enter n:";
  cin>>n;

  for(int i = 0; i < n; i++){

    cout<<endl;
    
    for(int j = 0; j < n; j++){
      c = 'A'+ (i + j);
      //c = 'A' + i +j - 2;
      cout<<c;
    }
  }

  return 0;
}
