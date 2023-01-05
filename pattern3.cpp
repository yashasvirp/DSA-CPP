/* new pattern
1234
1234
1234
1234

if n = 4 */

#include<iostream>
using namespace std;

int main(){

  int n;

  cin>>n;

  for(int i = 1; i <= n; i++){

    cout<<endl;

    for(int j = 1; j <= n; j++)
      cout<<j;
  }

  return 0;
}
