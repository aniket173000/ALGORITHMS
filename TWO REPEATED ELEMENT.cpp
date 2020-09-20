//PROBLEM STATEMENT - You are given an array of N+2 integer elements. All elements of the array are in range 1 to N. Also, all elements occur once except
//two numbers which occur twice.  Find the two repeating numbers.
// CODE BY aniket173000
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



// Function to find the two repeated element
// arr: input array
// N: denoting that the size of array is N + 2 and range of elements is [1, N]
pair<int,int> twoRepeated (int a[], int n)
{
    // Your code here
    int b[n]={0},i;
    vector<int>v;
    for(i=0;i<n+2;i++){
        b[a[i]-1]++;
        if(b[a[i]-1]==2)
        v.push_back(a[i]);
    }
   
   return std::make_pair(v[0],v[1]);
}

// { Driver Code Starts.

int main()
{
    int t,n;
    cin>>t;
    
    while(t--)
    {
        cin>>n;
        
        int a[n+2];
        
        for(int i=0;i<n+2;i++)
            cin>>a[i];
        
        pair<int , int>res;
        res = twoRepeated(a, n);
        cout<<res.first<<" "<<res.second<<endl;
    }
    return 0;
}
  // } Driver Code Ends

