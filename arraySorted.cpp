#include<iostream>
using namespace std;

int main(){

  int n, arr[100];

  bool flag = true;

  cout<<"Enter array size: ";
  cin>>n;

  cout<<"Enter first element:";
  cin>>arr[0];
  
  cout<<"Enter array elements: (press enter after each one) ";

  for(int i = 1; i < n; i++){
    cin>>arr[i];
    if(arr[i] < arr[i-1]){
      flag = false;
      break;
    }
  }

  if(flag == true)
    cout<<"Array is sorted"<<endl;
  else
    cout<<"Array not sorted"<<endl;

  
}
