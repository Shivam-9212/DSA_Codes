#include<iostream>
using namespace std;
void find_ith_bit(int a, int i){
    int mask = 1 << i;
    int result = a & mask;
    if(result != 0){
        cout<<"1 is at position "<<i<<endl;
    }
    else{
        cout<<"0 is at position "<<i<<endl;
    }
}
void set_ith_bit_to_1(int a, int i){
    int mask = 1 << i;
    int result = a | mask;
    cout<<result;
}
void set_ith_bit_to_0(int a, int i){
    int mask = 1<<i;
    int result = a ^ mask;
    cout<<result;
}
int main(){
    set_ith_bit_to_0(5,2);
    return 0;
}
// 0 0 1 0 1