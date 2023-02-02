/* This program will print the following:
    *
   **
  ***
 ****

 if n = 4 */

#include<iostream>
using namespace std;

int main(){

  int n;

  cout<<"Enter n: ";
  cin>>n;

  for(int i = 0; i < n; i++){
    int j;
    cout<<endl;
    for(j = 0; j < n-i; j++) // for spaces
      cout<<" ";

    for(int k = j-1; k < n; k++)
      cout<<"*";
  }

  cout<<endl;

  return 0;
  
}  
