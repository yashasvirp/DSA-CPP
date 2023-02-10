// An array of size N is given where N = 2M+1. (basically N is odd)
//M numbers are present twice, and only 1 number is present once.
// Find the unique element.

#include<iostream>
using namespace std;


int findUnique(int arr[],int n){
  int p = arr[0];

  for(int i = 1; i < n; i++) // XORing with 2 duplicate elements will cancel
    p = p^arr[i];            // each other out

  return p;
  
}

int main(){

  int n, arr[100], p;

  cout<<"Enter size: ";
  cin>>n;

  cout<<"Enter elements: ";
  
  for(int i = 0; i < n; i++)
    cin>>arr[i];

  
  cout<<findUnique(arr,n);  
  
  cout<<endl;
  
  return 0;
}
