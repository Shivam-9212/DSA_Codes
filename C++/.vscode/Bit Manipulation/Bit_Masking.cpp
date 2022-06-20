#include<iostream>
#include<math.h>
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
void number_of_bits(int a){
    int count = 0;
    while(a != 0){
        a = a>>1;
        count++;
    }
    cout<<count<<" no. of bits."<<endl;
}
int main(){
    number_of_bits(8);
    return 0;
}
// 1 1 0 1
// 1 1 0 0
// 1 1 0 0
// 1 0 1 1
// 1 