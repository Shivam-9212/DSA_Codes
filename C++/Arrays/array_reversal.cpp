#include<iostream>
using namespace std;

void reverse(int arr[], int size){
    int store;
    for (int i = 0; i < size/2; i++)
    {
        store = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = store;
    }
}

void display(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    reverse(arr, 10);
    display(arr, 10);
}
