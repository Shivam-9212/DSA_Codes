#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) {
    unordered_map<int,int> hash;
    for(int i = 0; i < n; i++){
        hash[a1[i]] += 1;
    }
    for(int i = 0; i < m; i++){
        hash[a2[i]] += 1;
    }
    for(int i = 0; i < m; i++){
        if(hash[a2[i]] < 2){
            return "No";
        } 
    }
    return "Yes";
}
int main(){
    int n = 12; int m = 7;
    int a1[] = {3231 ,53858 ,19 ,5 ,59 ,498 ,520 ,7 ,9 ,10 ,11 ,12};
    int a2[] = {520 ,7 ,498 ,59 ,10 ,6 ,12};
    cout<<isSubset(a1,a2,n,m);
    return 0;
}