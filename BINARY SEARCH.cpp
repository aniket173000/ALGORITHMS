// BINARY SEARCH IS APPLICABLE ONLY IN SORTED ARRAY.
#include <bits/stdc++.h> 
using namespace std;


 


// Function to find element in sorted array
// arr: input array
// N: size of array
// K: element to be searche
int searchInSorted(int arr[], int n, int K) 
{ 

   // Your code here 
   int i=0,j=n-1,k,p=-1;
   while(i<=j){
       k=(i+j)/2;
       if(arr[k]==K)
       {p=k;
        break;}
        else if(arr[k]>K)
        {
            i=i;
            j=k-1;
        }
        else if(arr[k]<K){
            i=k+1;
            j=j;
        }
   }
   if(p!=-1)
   return 1;
   else
   return -1;
   
}


int main() 
{ 
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        cout << searchInSorted(arr, n, k) << endl;

    }

	return 0; 
} 
  
  // TIME COMPLEXITY O( LOG N )
  // EXTRA SPACE O ( 1 ) -> NON - RECURSIVE SOLUTION
