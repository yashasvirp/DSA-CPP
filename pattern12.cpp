/* new pattern

ABC
ABC
ABC

if n = 3 */


#include<iostream>
using namespace std;

int main(){

  int n;
  char c;

  cin>>n;

  for(int i = 0; i < n; i++){

    cout<<endl;

    for(int j = 0; j < n; j++){

      c = 'A' + j;

      cout<<c;
    }

  }

  return 0;
}
