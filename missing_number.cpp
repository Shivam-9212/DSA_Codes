// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    int search(int A[], int l, int h, int key){
        int N = sizeof(A) / sizeof(A[0]);
        vector<int> vec1(A, A + N);
        int mid = (l+h)/2;
        sort(vec1.begin(),vec1.end());
        l = 0;
        h = vec1.size();
        while(l<h){
            if(vec1[mid] == key){
                return mid;
            }
            else if(vec1[mid] > key){
                h = mid;
            }
            else if(vec1[mid] < key){
                l = mid;
            }
            mid = (l+h)/2; 
        }
        return -1;
    }
};

// { Driver Code Starts. 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}  // } Driver Code Ends