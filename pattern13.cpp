/* new pattern
ABCD
EFGH
IJKL
MNOP

if n = 4 */


#include<iostream>
using namespace std;

int main(){

  int n, count = 0;
  char c = 'A';
  cin>>n;

  for(int i = 0; i < n; i++){

    cout<<endl;
    
    for(int j = 0; j < n; j++){
      c = 'A' + count++;
      cout<<c;
    }
  }

  return 0;
}
