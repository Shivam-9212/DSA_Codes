#include<iostream>
using namespace std;
int no_of_ways_in_matrix(int n, int m){
    if(m == 1|| n == 1){
        return 1;
    }
    else{
        return no_of_ways_in_matrix(n-1, m) + no_of_ways_in_matrix(n, m-1);
    }
}
int josephus(int n, int k){
    if(n == 1){
        return 0;
    }
    else{
        return (josephus(n-1,k)+k)%n;
    }
}
int main(){
    cout<<josephus(5, 3);
    return 0;
}