#include<iostream>
using namespace std;
bool palindrome(string s){
    for(int i=0; i<s.length(); i++){
        if(s[i]!=s[s.length()-1-i]){
            return false;
        }
    }
    return true;
}
void powerset(string s, int i, string curr){
    if(i == s.length()){
        cout<<curr<<endl;
        return;
    }
    powerset(s,i+1,curr+s[i]);
    powerset(s,i+1,curr);
    
}
bool match(){
    for(int i = 0; i < )
}
int main(){
    permute("madal",0 ,4);
    return 0;
}