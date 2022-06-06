#include<iostream>
#include<string.h>
using namespace std;
int check(int num, int store){
    if (num == 0)
    {
        return store;
    }
    store = (store*10) + (num%10);
    return check(num/10, store);
}
int check(string word, int i, int j){
    if(i > j){
        return 1;
    }
    else if(word[i] != word[j]){
        return 0;
    }
    else{
        return check(word, i+1, j-1);
    }
}
int main(){
    string str = "tnt";
    cout<<check(str, 0, str.length()-1);
    return 0;
}