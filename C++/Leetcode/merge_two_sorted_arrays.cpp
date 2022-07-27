#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<map>
using namespace std;
class Solution {
public:
    void merge(vector<int> nums1, int m, vector<int> nums2, int n) {
        int i = 0; int j = 0;
        vector<int> vec;
        if(m < 2){
            return;
        }
        while(i < m){
            if(nums1.at(i) < nums2.at(j)){
                vec.push_back(nums1.at(i));
                i++;
            }
            else if(nums1.at(i) > nums2.at(j)){
                vec.push_back(nums2.at(j));
                j++;
            }
            else if(nums1.at(i) == nums2.at(j)){
                vec.push_back(nums1.at(i));
                vec.push_back(nums2.at(j));
                i++;j++;
            }
        }
        for(;j < nums2.size(); j++){
            vec.push_back(nums2.at(j));
        }
        for(int i = 0; i < nums1.size(); i++){
            nums1[i] = vec.at(i);
            cout<<nums1[i]<<" ";
        }
    }
};
int main(){
    Solution s;
    vector<int>nums1 = {1,2,3,0,0,0};
    vector<int>nums2 = {2,5,6};
    s.merge(nums1, 3, nums2, 3);
    return 0;
}
