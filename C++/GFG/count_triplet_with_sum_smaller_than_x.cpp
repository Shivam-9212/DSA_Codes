// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	
	
	public:
	long long countTriplets(long long arr1[], int n, long long sum)
	{
	    // Your code goes here
	    int count = 0;
	    vector<int> arr;
	    for(int i = 0; i < n; i++){
	        arr.push_back(arr1[i]);
	    }
	    sort(arr.begin(), arr.end());
	    for(int i = 0; i < n-2; i++){
	        if(arr[i] < sum){
	            int low = i+1;
	            int high = n-1;
    	        while(low < high){
    	            int Sum = arr[i] + arr[low] + arr[high];
    	            if(Sum < sum){
    	                count += high-low;
    	                low++;
    	            } // 1 3 4 5 7
    	            else{
    	                high--;
    	            }
    	        }
	        }
	    }
	    return count;
	}
		 

};

// { Driver Code Starts.

int main() 
{
  
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
    	long long sum;
        cin>>n>>sum;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
	    

       

        Solution ob;
        cout << ob.countTriplets(arr, n, sum) ;
	   
        
	    cout << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends