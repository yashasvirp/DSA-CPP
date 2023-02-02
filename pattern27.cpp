/* This program will print the follwing pattern:

1234554321
1234**4321
123****321
12******21
1********1

if n = 5 */


#include<iostream>
using namespace std;

int main(){


  int n;

  cout<<"Enter n: ";
  cin>>n;

  for(int i = 1; i <= n; i++){

    cout<<endl;
    int j;
    for(j = 1; j <= n-i+1; j++)
      cout<<j;

    for(int k = 1; k <= 2*(i-1); k++)
      cout<<"*";
    
    for(int k = j-1; k >= 1; k--)
      cout<<k;
    
  }
  

  
  cout<<endl;

  return 0;
}
