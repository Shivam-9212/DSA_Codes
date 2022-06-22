#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int no_of_trailing_zerores_in_factorial(int a){
    int result = 0;
    for(int i = 5; i <= a; i *= 5){
        result = result + (a/i);
    }
    return result;
}
bool prime_numbers(int a){
    vector<int> arr;
    for(int i = 2; i*i <= a; i++){
        if((a % i) == 0){
            return false;
        }
    }
    return true;
}
int GCD(int a,int b){
    if(b == 0){
        return a;
    }
    return GCD(b,a%b);
}
void total_prime_factors(int a){
    vector<int> vec1;
    for(int i = 1; i <= a; i++){
        if((i == 1) || (i == 2) || (i == 3) || (i == 5)){
            vec1.push_back(i);
        }
        else if((i % 2 != 0) && (i % 3 != 0) && (i % 5 != 0)){
            vec1.push_back(i);
        }
    }
    for(int i = 0; i < vec1.size(); i++){
        cout<<vec1.at(i)<<" ";
    }
}
void palindrome(int a){
    int c = a;
    int b = 0;
    while(a != 0){
        b += a % 10;
        b *= 10;
        a = a / 10;
    }
    if((b/10) == c){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not a Palindrome";
    }
}
int main(){
    cout<<GCD(270, 192);
    return 0;
}