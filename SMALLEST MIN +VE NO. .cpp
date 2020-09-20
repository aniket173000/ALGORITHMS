// PROBLEM STATEMENT - You are given an array arr[] of N integers including 0. The task is to find the smallest positive number missing from the array..
// CODE BY aniket173000

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Functio to find first smallest positive
// missing number in the array
int missingNumber(int arr[], int n) { 
    
    // Your code here 
    int a[1000000]={0},k,i;
    for(i=0;i<n;i++){ 
        if(arr[i]>0)
        a[arr[i]]++;
    }
    for(i=1;i<1000000;i++){
        if(a[i]==0)
        {k=i;
        break;}
    }
    return k;
    
} 

// { Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)cin>>arr[i];
        cout<<missingNumber(arr, n)<<endl;
    }
    return 0; 
}   // } Driver Code Ends
