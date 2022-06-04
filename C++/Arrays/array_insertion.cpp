#include<iostream>
using namespace std;

void insertion_at_begining(int arr[], int size, int element){
    for (int i = size-1; i >= 1; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = element;
} 

void insertion_at_end(int arr[], int size, int element){
    arr[size-1] = element;
} 

void insertion_at_given_index(int arr[], int size, int element, int index){
    // if(index == size){
    //     arr[size] = element;
    //     return;
    // }
    for (int i = size-1; i > index ; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[index] = element;
}

void display(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9};
    insertion_at_begining(arr, 10, 1000);
    display(arr, 10);
}
