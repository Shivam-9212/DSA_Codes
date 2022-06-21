#include<iostream>
#include<math.h>
using namespace std;
#include<vector>
void distinct_element(int a[], int l){
    int result = 0;
    for(int i = 0; i < l; i++){
        result = result ^ a[i];
    }
    cout<<result<<" is distinct element.";
}
vector<int> two_distinct_elements(int a[], int l){
    vector<int> arr2;
    vector<int> arr3;
    vector<int> arr4;
    int result = 0;
    for(int i = 0; i < l; i++){
        result = result ^ a[i];
    }
    int right_most_bit = result & 1;
    int temp = result;
    for(int i = 0; i < l; i++){
        if((1 & a[i]) == 0){
            arr2.push_back(a[i]);
        }
        else if((1 & a[i]) == 1){
            arr3.push_back(a[i]);
        }
    }
    if(right_most_bit == 1){
        for(int i = 0; i < arr3.size(); i++){
            temp = temp ^ arr3[i];
        }
        arr4.push_back(temp);
        arr4.push_back(result^temp);
    }
    else if(right_most_bit == 0){
        for(int i = 0; i < arr2.size(); i++){
            temp = temp ^ arr2[i];
        }
        arr4.push_back(temp);
        arr4.push_back(result^temp);
    }
    return arr4;
}
int bit_index(int a){
    return (a & 1);
}
int bin_to_dec(int a[]){
    int result = 0;
    for(int i = 0; i < 8; i++){
        result += pow(2, i) * a[i];
    }
    return result;
}
int three_times_repeating(int a[], int l){
    int bits[64] = {0};
    int shifts = 0;
    for(int i = 0; i < l; i++){
        while(a[i] != 0){
            bits[shifts] += bit_index(a[i]);
            a[i] = a[i] >> 1; shifts += 1;
        }
        shifts = 0;
    }
    int i = 0;
    int arr[64] = {0};
    while(bits[i] != 0){
        arr[i] = bits[i]%3;
        i++;
    }
    return bin_to_dec(arr);
}
int main(){
    int a[] = {2, 2, 1, 5, 1, 1, 2, 3, 3, 3};
    cout<<three_times_repeating(a, 10);
    return 0;
}