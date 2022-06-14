// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    void swap(vector<long long>& arr, int a, int b){
        while(a < b){
            int temp = arr[a];
            arr[a] = arr[b];
            arr[b] = temp;
            a++;b--;
        }
    }
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
        // code here
        int size = n-1;
        int i = 0;
        while(size-i >= k){
            swap(arr, i, i+(k-1));
            i+=k;
        }
        if(i == size){
            return;
        }
        int store = i;
        vector<int> vec1;
        for(;i < n; i++){
            vec1.push_back(arr[i]);
        }
        reverse(vec1.begin(), vec1.end());
        for(int j = 0; j < vec1.size(); j++){
            arr[store] = vec1[j];
            store++;
        }
    }
};

// { Driver Code Starts.
int main() {
    int t; 
    cin >> t; 
    while(t--){ 
        int n;
        cin >> n; 
        vector<long long> arr; 
        int k;
        cin >> k; 

        for(long long i = 0; i<n; i++)
        {
            long long x;
            cin >> x; 
            arr.push_back(x); 
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);
        
        for(long long i = 0; i<n; i++){
            cout << arr[i] << " "; 
        }
        cout << endl;
    }
}

  // } Driver Code Ends