#include<iostream>
using namespace std;
void delete_at_begining(int arr[], int *size){
    for (int i = 0; i < *size; i++)
    {
        /* code */
        arr[i] = arr[i+1];
    }
    *size = *size-1;
}
void delete_at_end(int arr[], int *size){
    *size = *size-1;
}
void delete_at_index(int arr[], int *size, int index){
    for (int i = index; i < *size-1 ; i++)
    {
        arr[i] = arr[i+1];
    }
    *size = *size-1;
}
void display(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    int size = 10;
    int arr[10] = {223,1,2,3,4,5,6,7,8,9};
    delete_at_index(arr, &size,0);
    display(arr, size);
    return 0;
}