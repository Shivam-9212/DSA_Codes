// { Driver Code Starts
#include <iostream>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
            if(n == 1){
                return 1;
            }
            int i = 0;
            int j = n-1;
            long sum = a[0];
            long sum_2 = a[n-1];
            while(i < j){
                if(sum < sum_2){
                    i++;
                    sum += a[i];
                }
                else{
                    j--;
                    sum_2 += a[j]; 
                }
            }
            if(sum == sum_2){
                return i+1;
            }
            else{
                return -1;
            }
    }
};


// { Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends