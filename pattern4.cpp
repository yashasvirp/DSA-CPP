/* new pattern

321
321
321
if n = 3 */

#include<iostream>
using namespace std;

int main(){

  int n;

  cin>>n;

  for(int i = 1; i <=n; i++){

    cout<<endl;
    for(int j = n; j >= 1; j--) 
      cout<<j; //this can also be done as j = 1 to n and cout<<n-j+1;
  }

  return 0;
}
