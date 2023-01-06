/* new pattern

1
23
456
78910

if n = 4 */

#include<iostream>
using namespace std;

int main(){

  int n, count = 1;

  cin>>n;

  for(int i = 0; i < n; i++){

    cout<<endl;

    for(int j = 0; j <= i; j++)
      cout<<count++<<" ";
  }

  return 0;

}
