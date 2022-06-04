#include<iostream>
using namespace std;

void shift_to_right(int arr[], int rotations, int size){
    while (rotations != 0)
    {
        int store = arr[size-1];
        for (int i = size-1; i >= 1; i--)
        {
            arr[i] = arr[i-1];
        }
        arr[0] = store;
        rotations--;
    }
    
}

void shift_to_left(int arr[], int rotations, int size){
    while (rotations != 0)
    {
        int store = arr[0];
        for (int i = 0; i < size; i++)
        {
            arr[i] = arr[i+1];
        }
        arr[size-1] = store;
        rotations--;
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
    shift_to_left(arr,24353,10);
    display(arr, 10);
}
