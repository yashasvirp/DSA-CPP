#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n, q, k; 
    cin>>n>>q;
    int *arr[n];
    int q1, q2;
    
    for(int i = 0; i < n; i++){
        cin>>k;
        int *b = (int *)malloc(sizeof(int)*k);
        for(int j = 0; j < k; j++)
            cin>>b[j];
        arr[i] = b;
    }
    for(int i = 0; i < q; i++){
        cin>>q1>>q2;
        cout<<arr[q1][q2]<<endl;
    }
    
    return 0;
}
