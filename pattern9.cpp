/* new pattern
1
23
345
4567

if n = 4 */

#include<iostream>
using namespace std;


int main(){

  int n, count;

  cin>>n;

  for(int i = 1; i <= n; i++){

    cout<<endl;
    count = i;
    for(int j = 1; j <= i; j++)
      cout<<count++<<" ";
    
  }


  //This will also do the trick without extra count variable
    for(int i = 1; i <= n; i++){

    cout<<endl;

    for(int j = 0; j < i; j++)
      cout<<i+j<<" ";
    
  }


      
  return 0;
}
