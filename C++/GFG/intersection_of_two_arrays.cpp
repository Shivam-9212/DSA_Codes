// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
       int arr1[100000] = {0}; 
       int arr2[100000] = {0}; 
       for(int i = 0; i < n; i++){
           arr1[a[i]] = 1;
       }
       for(int i = 0; i < m; i++){
           arr2[b[i]] = 1;
       }
       int count = 0;
       for(int i = 0; i < 100000; i++){
           if(arr1[i] == 1 && arr2[i] == 1 ){
               count += 1;
           }
       }
       return count;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++) cin >> a[i];

        for (int i = 0; i < m; i++) cin >> b[i];
        Solution ob;
        cout << ob.NumberofElementsInIntersection(a, b, n, m) << endl;
    }
    return 0;
}  // } Driver Code Ends