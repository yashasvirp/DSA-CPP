/* new pattern
 *
 **
 ***
 ****
if n = 4
*/

#include<iostream>
using namespace std;

int main(){

  int n;

  cin>>n;

  for(int i = 0; i < n; i++){

    cout<<endl;

    for(int j = 0; j <= i; j++)
      cout<<"*";

  }

  return 0;
}
