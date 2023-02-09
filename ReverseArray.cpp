/* Program to reverse array*/

#include<iostream>
using namespace std;

void reverse(int arr[], int n){

  int temp;
  
  for(int i = 0, j = n-1; i <= j; i++,j--){
    temp = arr[i];
    arr[i]=arr[j];
    arr[j] = temp;
  }

  return;
}

int main(){

  int n, arr[100];

  cout<<"Enter size: ";
  cin>>n;

  cout<<"Enter elements: ";
  for(int i = 0; i < n; i++)
    cin>>arr[i];

  reverse(arr,n);

  cout<<"After reverse: ";
  for(int i = 0; i < n; i++)
    cout<<arr[i]<<" ";

  cout<<endl;

  return 0;
  
}
