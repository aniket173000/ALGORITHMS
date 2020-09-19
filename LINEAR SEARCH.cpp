#include<bits/stdc++.h>
using namespace std;
int main(){
cout << "ENTER NO. OF ELEMENTS IN AN ARRAY" << "\n";
int n;
cin >> n;
int a[n];
int i;
cout << "ENTER THE ELEMENTS OF ARRAY" << "\n";
for(i=0;i<n;i++){
cin >> a[i];
}
cout << "ENTER THE ELEMENT TO BE SEARCHED"<< "\n";
int k,p=0;
cin >> k;
for(i=0;i<n;i++){
if(a[i]==k)
 {
 cout << "ELEMENT FOUND AT INDEX -"<< i << "\n";
 p=1;
 break;
 }
 }
 if(p==0)
 cout << "ELEMENT NOT PRESENT IN ARRAY" << "\n" ;
 return 0;
 }
 // TIME COMPLEXITY - O(N) 
 // EXTRA SPACE - O(1)
 
