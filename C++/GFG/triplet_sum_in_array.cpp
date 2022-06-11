// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
    vector<int> vec1;
    for(int i = 0; i < n; i++){
        vec1.push_back(A[i]);
    }
    sort(vec1.begin(), vec1.end());
    int sum = 0;
    for(int i = 0; i < n; i++){
        int low = i+1;
        int high = n-1;
        while(low < high){
            sum = vec1.at(low) + vec1.at(high) + vec1.at(i);
            if(sum < X){
                low++;
            }
            else if(sum > X){
                high--;
            }
            else{
                if(sum == X){
                    return 1;
                }
            }
        }
    }
    return 0;
    }

};

// { Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}
  // } Driver Code Ends