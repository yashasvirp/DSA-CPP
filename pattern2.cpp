/* This program prints the following pattern
111
222
333
if n = 3 */

#include<iostream>
using namespace std;

int main(){

  int n;

  cin>>n;

  for(int i = 1; i <= n; i++){
    cout<<endl;

    for(int j = 1; j <= n; j++)
      cout<<i;
  }

  // using while loop

  int i = 1;

  while(i <= n){

    cout<<endl;

    int j = 1;

    while(j <= n){

      cout<<i;
      j += 1;
    }

    i += 1;
  }
  
    
  return 0;
}
