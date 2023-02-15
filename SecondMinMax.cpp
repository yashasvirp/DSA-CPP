/* Retrieve second minimum and second maximum element in the array */
//It takes two passes, one to find min and max, and other to find second min and second max
#include<iostream>
#include<climits>
using namespace std;

int main(){

  int arr[100], n, smin = INT_MAX, smax = INT_MIN, min = INT_MAX, max = INT_MIN;

  cout<<"Enter size of array: ";
  cin>>n;

  cout<<"Enter array elements: ";
  
  for(int i = 0; i < n; i++){
    cin>>arr[i];
    if(arr[i] >= max){
      smax = max;
      max = arr[i];
    }else if(arr[i] >= smax && arr[i] != max)
      smax = arr[i];
    
    if(arr[i] <= min){
      smin = min;
      min = arr[i];
    }
    else if(arr[i] <= smin && arr[i] != min)
      smin = arr[i];
  }


  cout<<smin<<" "<<smax<<endl;

  return 0;
  
}
