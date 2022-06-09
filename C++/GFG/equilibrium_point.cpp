// { Driver Code Starts
#include <iostream>
using namespace std;
#include<bits/stdc++.h>

 // } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        if(n == 1){
            return a[0];
        }
        int sum = a[0];
        int sum_2 = a[n-1];
        int j = n-2;
        int i = 1;
        do{
            if(i >= n-1){
                return -1;
            }
            else if(j <= 0){
                return -1;
            }
            sum += a[i];
            sum_2 += a[j];
            i++;j--;
        }while(j-i == 2);
        if (sum == sum_2)
        {
            return i+1;
        }
        return -1;
    }
};

// { Driver Code Starts.


int main() {
        long long n = 30;
        long long a[n] = {20 ,17, 42, 25, 32, 32, 30, 32, 37, 9, 2 ,33 ,31 ,17 ,14 ,40 ,9 ,12, 36, 21, 8 ,33, 6 ,6 ,10 ,37 ,12 ,26 ,21 ,3};
        Solution ob;
        int sum = 0;
        int sum2 = 0;
        int j = n-1;
        for (int i = 0; i < j; i++)
        {
            if(sum == sum2){
                cout<<sum2<<endl;
            }
            sum += a[i];
            sum2 += a[j];
            j--;
        }
        cout<<sum2<<endl;
        cout<<sum;
        //calling equilibriumPoint() function
        //cout << ob.equilibriumPoint(a, n) << endl;
    return 0;
}
  // } Driver Code Ends