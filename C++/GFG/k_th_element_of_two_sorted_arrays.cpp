// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        vector<int> arr3;
        for(int i = 0; i < n; i++){
            arr3.push_back(arr1[i]);
        }
        for(int j = 0; j < m; j++){
            arr3.push_back(arr2[j]);
        }
        sort(arr3.begin(), arr3.end());
        return arr3.at(k-1);
    }
};

// { Driver Code Starts.
 
// Driver code
int main()
{
    int n = 5; int m = 7; int k = 7;
    int arr1[] = {100, 112, 256, 349, 770};
    int arr2[] = {72, 86, 113, 119, 265, 445, 892};
	Solution ob;
    cout << ob.kthElement(arr1, arr2, n, m, k)<<endl;
    return 0;
}  // } Driver Code Ends