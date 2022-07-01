#include <stdio.h>
int main(){
    int a = 1;
    for (int i = 1; i <= 11; ++i) {
        a = i * a;
    }
    printf("%d",a);
    return 0;
}