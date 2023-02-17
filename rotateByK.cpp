/* Program to rotate an array by K places

Strategy - 

For right rotation:
1. Reverse last k elements of array
2. Reverse first n-k elements of array
3. Reverse whole array

*/

#include<iostream>
using namespace std;

void reverse(int arr[], int start, int end){

  int temp;
  
  for(int i = start, j = end; i < j; i++,j--){
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }

  return;
    
}

void display(int arr[], int n){
  for(int i = 0; i < n; i++)
    cout<<arr[i]<<" ";

  cout<<endl;
}

void rightRotate(int arr[], int n, int k){
  reverse(arr,n-k,n-1);
  reverse(arr,0,n-k-1);
  reverse(arr,0,n-1);
  display(arr,n);
}

void leftRotate(int arr[], int n, int k){
  reverse(arr,0,k-1);
  reverse(arr,k,n-1);
  reverse(arr,0,n-1);
  display(arr,n);
}

int main(){

  int n, arr[100], k;
  char ch;

  cout<<"Enter size: ";
  cin>>n;


  cout<<"Enter elements: ";

  for(int i = 0; i < n; i++)
    cin>>arr[i];


  while(true){
    cout<<"Enter k:";
    cin>>k;

    if(k > n){
      k = k%n;
    }
    else if(k == n){
      display(arr,n);
      continue;
    }

    cout<<"Enter left(l) or right(r) or break(b):";
    cin>>ch;

    if(ch == 'l' || ch == 'L')
      leftRotate(arr,n,k);
    else if(ch == 'r' || ch == 'R')
      rightRotate(arr,n,k);
    else if(ch == 'b')
      break;
    else
      cout<<"Wrong choice! Enter again!";
  }
   
}

