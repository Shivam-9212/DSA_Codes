#include<iostream>
using namespace std;

bool sort_check(int arr[], int size){
    for (int i = 1; i < size; i++)
    {
        /* code */
        if(arr[i] < arr[i-1]){
            return false;
        }
    }
    return true;
}

bool sort_check_desc(int arr[], int size){
    for (int i = 1; i < size; i++)
    {
        /* code */
        if(arr[i] > arr[i-1]){
            return false;
        }
    }
    return true;
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
    cout<<sort_check(arr, 10);
}
