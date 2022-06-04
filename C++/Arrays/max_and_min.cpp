#include<iostream>
using namespace std;

int max(int arr[], int size){
    int max = 0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int min(int arr[], int size){
    int min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
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
    cout<<min(arr, 10);
}
