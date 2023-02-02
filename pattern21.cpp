/* This program will print the following pattern:
*****
 ****
  ***
   **
    *
if n = 5 */


#include<iostream>
using namespace std;

int main(){

  int n;

  cout<<"Enter n:";
  cin>>n;

  for(int i = 0; i < n; i++){

    cout<<endl;
    int j;
    for(j = 0; j < i; j++)
      cout<<" ";

    //for(int k = 0; k < n-j; k++)
    for(int k = 0; k < n-i; k++) //Another way of doing it
      cout<<"*";
  }

  cout<<endl;

  return 0;
  
  
}

