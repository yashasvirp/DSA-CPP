/* new pattern

1
22
333
4444
if n = 4 */


#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;

  for(int i = 1; i <= n; i++){
    cout<<endl;

    for(int j = 1; j <= i; j++)
      cout<<i;
  }

  return 0;
}
