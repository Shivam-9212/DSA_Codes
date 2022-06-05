#include<iostream>
using namespace std;

int TOH(int n, String source, String helper, String destination){
    if(n == 1){
        cout<<"Shifting from "<<source<<" to "<<helper<<".";
    }
    else{
        TOH(n-1, source, destination, helper);
        cout<<"Shifting from "<<source<<" to "<<<<".";
        TOH(n-1, helper, source, destination);
    }
}

int main(){
    TOH(3, S, H, D);
    return 0;
}