// PROBLEM STATEMENT - Given an integer array representing the heights of N buildings, the task is to delete N-2 buildings such that the water that can be trapped 
between the remaining two building is maximum.



// C++ implementation of the approach 
#include<bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends


//User function Template for C++


// Return the maximum water that can be stored 
int maxWater(int a[], int n) 
{ 
    //Your code here
    int i=0,j=n-1,s=0,k;
    if(n<3)
    return 0;
    else
    {
        while(i<j){
            k=min(a[i],a[j])*((j-i)-1);
            s=max(s,k);
            if(a[j]<a[i])
            j--;
            else
            i++;
        }
    }
    return s;
} 




// { Driver Code Starts.

// Driver code 
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int height[n];
        
        for(int i=0;i<n;i++)
        {
            cin>>height[i];
        }
        
        cout<<(maxWater(height, n))<<endl;
    }

	 
} 

