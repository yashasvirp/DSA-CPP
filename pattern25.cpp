/* This program will print the following:

   1
  23
 456
78910

if n = 4 */

#include<iostream>
using namespace std;

int main(){

  int n, count = 1;

  cout<<"Enter n: ";
  cin>>n;

  for(int i = 1; i <= n; i++){

    cout<<endl;

    for(int j = 0; j < n-i; j++)
      cout<<" ";
    
    for(int k = 0; k < i; k++)
      cout<<count++;
  }
  

  cout<<endl;

  return 0;

}
