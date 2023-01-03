#include <iostream>
#include <cstdio>
using namespace std;

int main() {

  int a,b;

  cin>>a>>b;

  for(int i = a; i <= b; i++){

    if(i == 1)
      cout<<"\none";
    else if(i == 2)
      cout<<"\ntwo";
    else if(i == 3)
      cout<<"\nthree";
    else if(i == 4)
      cout<<"\nfour";
    else if(i == 5)
      cout<<"\nfive";
    else if(i == 6)
      cout<<"\nsix";
    else if(i == 7)
      cout<<"\nseven";
    else if(i == 8)
      cout<<"\neight";
    else if(i == 9)
      cout<<"\nnine";
    else if(i%2 == 0)
      cout<<"\neven";
    else
      cout<<"\nodd";
    
  }
    return 0;
}
