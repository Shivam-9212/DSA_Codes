#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#include<vector>
bool findTriplets(int arr[], int n)    { 
        if(n == 3){
            int sum = 0;
            for(int i = 0; i < n; i++){
                sum += arr[i];
                if(sum == 0){
                    return 1;
                }
            }
            return 0;
        }
        vector<int> vec1;
        for(int i = 0; i < n; i++){
            vec1.push_back(arr[i]);
        }
        sort(vec1.begin(), vec1.end());
        for (int i = 0; i < n; i++)
        {
            int low = i+1;
            int high = n-1;
            while (low < high)
            {
                int sum = vec1.at(i) + vec1.at(high) + vec1.at(low);
                if(sum == 0){
                    return 1;
                }
                else if(sum < 0){
                    low++;
                }
                else{
                    high--;
                }
            }
        }
        return 0;
    }
int main(){
    int arr[] = {60, -65, 50, -21, 8, 93};
    int n = 6;
    cout<<findTriplets(arr, n); 
}