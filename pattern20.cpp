/* This program prints the following pattern:
****
***
**
*

when n = 4 */

#include<iostream>
using namespace std;

int main(){

  int n;

  cout<<"Enter n: ";
  cin>>n;

  for(int i = 0; i < n; i++){

    cout<<endl;
    for(int j = 0; j < n-i; j++)
      cout<<"*";

  }

  cout<<endl;

  return 0;

}
