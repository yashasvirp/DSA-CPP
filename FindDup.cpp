/* Array of N elements contains elements fro 1-(N-1) at least once, and 1 element twice. Find that element */

/*

Strategy - 
First sum up elements in the array.
Since elements are from 1 to n-1, take their summation = n*(n-1)/2
The difference between the sum and the above summation gives the duplicate element.

 */
#include<iostream>
using namespace std;


int findDup(int arr[], int n){

  int sum = 0;

  for(int i = 0; i < n; i++)
    sum += arr[i];

  return sum - (n*(n-1)/2);
}

int main(){

  int arr[100], n;

  cout<<"Enter size:";
  cin>>n;

  cout<<"Enter Array elements:";
  for(int i = 0; i < n; i++)
    cin>>arr[i];

  cout<<"Duplicate element is:"<<findDup(arr,n);

  cout<<endl;
  return 0;
}
