#include<iostream>
using namespace std;
int no_of_trailing_zerores_in_factorial(int a){
    int result = 0;
    for(int i = 5; i <= a; i *= 5){
        result = result + (a/i);
    }
    return result;
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
    palindrome(1919);
    return 0;
}