// PROBLEM STATEMENT - Given an unsorted array A of size N of non-negative integers, find a continuous sub-array which adds to a given number S. 
// YOUR C++ CODE GOES HERE BY aniket173000

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to find the subarray with given sum k
// arr: input array
// n: size of array
vector<int> subarraySum(int a[], int n, int s){
    
    // Your code here
    int i,j=0,sum=0;
    vector<int>v;
    for(i=0;i<n;i++){
        sum=sum+a[i];
        if(sum>s){
            while(s<sum){
                sum=sum-a[j];
                j++;
            }
        } 
        if(sum==s)
        {
            v.push_back(j+1);
            v.push_back(i+1);
            return v;
        }
    } 
    v.push_back(-1);
    return v;
    
}

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        vector<int>res;
        res = subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  

// TIME COMPLEXITY - O ( N );
// EXTRA SPACE - O ( 1 );
