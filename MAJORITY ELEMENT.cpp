#include<bits/stdc++.h>
using namespace std;

// Function to find majority element in the array
// a: input array
// size: size of input array
int majorityElement(int a[], int n)
{
    
    
    int e=1;
    int i,j;
    int r=0,p=0;
    for(i=1;i<n;i++){
        if(a[r]==a[i])
        e++;
        else
        e--;
        if(e==0)
        {
            r=i;
            e=1;
        }
    }
    for(i=0;i<n;i++){
        if(a[i]==a[r])
        p++;
    }
    if(p>n/2)
    return a[r];
    else
    return -1;
    
    
}



int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        cout << majorityElement(arr, n) << endl;
    }

    return 0;
}
  // MAJORITY ELEMENT - A majority element in an array A of size N is an element that appears more than N/2 times in the array.
