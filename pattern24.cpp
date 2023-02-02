/* This program will print the following:
1234
 234
  34
   4

if n = 4 */

#include<iostream>
using namespace std;

int main(){


  int n;

  cout<<"Enter n: ";
  cin>>n;

  for(int i = 1; i <= n; i++){

    cout<<endl;

    for(int j = 1; j < i; j++)
      cout<<" ";

    for(int k = 0; k <= n-i; k++)
      cout<<i+k;
  }

  
  cout<<endl;

  return 0;
}
