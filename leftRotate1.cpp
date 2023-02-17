// This program is to rotate array elements to the left by 1 place.
//It can also be modified to rotate array to right by 1 place.

#include<iostream>
using namespace std;

void rotateLeft(int arr[], int n){

  int temp = arr[0];

  for(int i = 1; i < n; i++)
    arr[i-1] = arr[i]; //can also iterate from 0 to n-1 and do a[i] = a[i+1]

  arr[n-1] = temp;

  return;
}

void rotateRight(int arr[], int n){

  int temp = arr[n-1];

  for(int i = n-1; i >= 0; i--)
    arr[i+1] = arr[i]; 

  arr[0] = temp;

  return;
}

void display(int arr[], int n){

  for(int i = 0; i < n; i++)
    cout<<arr[i]<<" ";

  cout<<endl;
}

int main(){

  int n, arr[100];

  cout<<"Enter size: ";
  cin>>n;

  cout<<"Enter elements: ";

  for(int i = 0; i < n; i++)
    cin>>arr[i];

  display(arr,n);
  rotateLeft(arr,n);
  cout<<"After left rotation:";display(arr,n);
  rotateRight(arr,n);
  cout<<"After right rotation:";display(arr,n);

  return 0;
  
}
