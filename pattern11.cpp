/* new pattern
AAA
BBB
CCC

for n = 3 */

#include<iostream>
using namespace std;

int main(){

  int n;

  cin>>n;
  char c;

  for(int i = 0; i < n; i++){

    cout<<endl;
    c = 'A'+ i;
    for(int j = 0; j < n; j++)
      cout<<c;
  }

  return 0;
}
