#include<iostream>
using namespace std;
void distinct_element(int a[], int l){
    int result = 0;
    for(int i = 0; i < l; i++){
        result = result ^ a[i];
    }
    cout<<result<<" is distinct element.";
}
void two_distinct_elements(int a[], int l){
    int arr[2];
    int result
    for(int i = 0; i < l; i++){
    }
}
int main(){
    int a[] = {1, 2, 3, 9, 4, 5, 6, 6, 1, 2, 4, 5};
    distinct_element(a, 12);
    return 0;
}