/* This program will display the following pattern:

    1
   22
  333
 4444
55555

if n = 5 */

#include<iostream>
using namespace std;

int main(){

  int n;

  cout<<"Enter n: ";
  cin>>n;


  for(int i = 1; i <= n; i++){

    cout<<endl;

    for(int j = 0; j < n-i; j++)
      cout<<" ";

    for(int k = 0; k < i; k++)
      cout<<i;
  }

  cout<<endl;

  return 0;
}
