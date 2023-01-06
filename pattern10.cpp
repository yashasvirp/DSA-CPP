/* new pattern

1
21
321
4321 for n = 4 */

#include<iostream>
using namespace std;

int main(){

  int n;

  cin>>n;

  for(int i = 1; i <= n; i++){

    cout<<endl;

    for(int j = 0; j < i; j++)
      cout<<i-j;
  }

  return 0;

}
