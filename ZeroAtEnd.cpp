/* This program is to move all the zeros in the array to the end of array*/

/*
Strategy: 
1. Find the first occurence of 0 => k
2. i = k, j = k+1
3. Increment j to find the next non-zero occurence. Once found, swap a[i] and a[j], and increment i. i will ALWAYS point to a 0.

Time Complexity = O(n)
SC = O(1)
*/

#include<iostream>
using namespace std;

void moveZeros(int arr[], int n){

  int temp, k= 0;

  while(k < n)
    if(arr[k] == 0)
      break;
    else
      k++;

  int i = k, j = k+1;

  // for(int i = 0; i < n; i++)
  //   if(arr[i] == 0)
  //     for(int j = i+1; j < n; j++)
  // 	if(arr[j] != 0){
  // 	  temp = arr[i];
  // 	  arr[i] = arr[j];
  // 	  arr[j] = temp;
  // 	  break;
  // 	}

  while(i < n && j < n){

    if(arr[j] != 0){
      temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
      i++;
    }
    
    j++;
  }
  
  return;
}



int main(){

  int arr[100], n;

  cout<<"Enter size:";
  cin>>n;

  cout<<"Enter array: ";
  for(int i = 0; i < n; i++)
    cin>>arr[i];

  
  for(int i = 0; i < n; i++)
    cout<<arr[i]<<" ";

  cout<<"After operation:"<<endl;

  moveZeros(arr,n);
  
  for(int i = 0; i < n; i++)
    cout<<arr[i]<<" ";

  cout<<endl;

  
  
  return 0;
}

