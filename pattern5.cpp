/* pattern 5

123
456
789

if n = 3 */

#include<iostream>
using namespace std;

int main(){

  int n, count = 1;

  cin>>n;

  
  for(int i = 0; i < n; i++){

    cout<<endl;
 
    for(int j = 1; j <= n; j++){
      cout<<count<<" ";
      count++;
    }
      

  }

  return 0;
}
