#include<iostream>
using namespace std;

int sum(int num){
    if (num == 0)
    {
        /* code */
        return 0;
    }
    else{
        return num + sum(num-1);
    }
}

int main(){
    cout<<sum(5);
    return 0;
}