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
void total_prime_factors(int a){
    vector<int> vec1;

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
    total_prime_factors(18);
    return 0;
}