#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<map>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>vec;
        map<int, int> hash;
        int diff = 0;
        for(int i = 0; i < nums.size(); i++){
            diff = target-nums.at(i);
            if(hash.find(diff) != hash.end()){
                vec.push_back(hash.find(diff)->second);
                vec.push_back(i);
                break;
            }
            else{
                hash.insert({nums.at(i), i});
            }
        }
        return vec;
    }
};
int main(){
    vector<int> vec = {3,2,4};
    int target = 6;
    Solution s;
    vector<int> vec1 = s.twoSum(vec, target);
    for(int i = 0; i < vec1.size(); i++){
        cout<<vec1.at(i)<<endl;
    }
    return 0;
}