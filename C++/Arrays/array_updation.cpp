#include<iostream>
using namespace std;

void update(int arr[], int element, int index){
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
    update(arr,100,0);
    display(arr, 10);
}
