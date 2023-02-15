/*
Given an integer array sorted in non-decreasing order, remove the duplicates in place such that each unique element appears only once. The relative order of the elements should be kept the same.

If there are k elements after removing the duplicates, then the first k elements of the array should hold the final result. It does not matter what you leave beyond the first k elements.
*/

#include<iostream>
using namespace std;

int removeDup(int arr[], int n);

int main(){

  int n, arr[100];

  cout<<"Enter size: ";
  cin>>n;

  cout<<"Enter elements: ";

  for(int i = 0; i < n; i++)
    cin>>arr[i];

  int k = removeDup(arr,n);

  for(int i = 0; i < k; i++)
    cout<<arr[i]<<" ";

  return 0;
}

int removeDup(int arr[], int n){

  int i = 0;

  for(int j = 1; j < n; j++)
    if(arr[i] != arr[j])
      arr[++i] = arr[j];

  return i+1;
  
}

  
