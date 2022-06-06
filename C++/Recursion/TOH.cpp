#include<iostream>
using namespace std;

void TOH(int n, string source, string helper, string destination){
    if(n == 1){
        cout<<"Shifting disk "<<n<<" from "<<source<<" to "<<destination<<"."<<endl;
        return;
    } 
    else{
        TOH(n-1, source, destination, helper);
        cout<<"Shifting disk "<<n<<" from "<<source<<" to "<<destination<<"."<<endl;
        TOH(n-1, helper, source, destination);
    }
}

int main(){
    Solution s1;
    int arr[] = {1,2,2};;
    //TOH(3, "Source", "Helper", "Destination");
    return 0;
}