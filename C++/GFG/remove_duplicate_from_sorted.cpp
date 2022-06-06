// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    int remove_duplicate(int a[],int n){
        int temp = 0;
        if(n == 0){
            return 0;
        }
        vector<int> arr;
        for(int i = 0; i < n; i++){
            if(temp != a[i]){
                arr.push_back(a[i]);
                temp = a[i];
            }
        }
        for(int i = 0; i < arr.size(); i++){
            a[i] = arr.at(i);
        }
        return arr.size();
    }
};

// { Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
    Solution ob;
    int n = ob.remove_duplicate(a,N);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
}  // } Driver Code Ends