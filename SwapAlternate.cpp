/* This program is to swap alternate elements in array */

//If the number of elements in array are odd, then the last number remains same

#include<iostream>
using namespace std;

int main(){

  int n, arr[100];

  cout<<"Enter size: ";
  cin>>n;

  cout<<"Enter elements: ";

  //int p = (n%2==0)?n:n-1; not required, run loop only till n-1
  
  for(int i = 0; i < n; i++)
    cin>>arr[i];
  
  for(int i = 0; i < n-1; i+=2){
    
    int temp;
    temp = arr[i];
    arr[i] = arr[i+1];
    arr[i+1] = temp;
  }

  cout<<"After swapping: ";

  for(int i = 0; i < n; i++)
    cout<<arr[i]<<" ";

  cout<<endl;

  return 0;

}
