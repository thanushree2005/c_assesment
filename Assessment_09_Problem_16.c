#include <stdio.h>

int main() {
    //example array value
    int a[50] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4};
    int b[50] = {15,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    int c[51] = {0};
    int carry = 0;
    int j=0;
    int e=0;
    for (int i = 49; i >= 0; i--) {
        int sum = a[i] + b[i] + carry;
        c[j] = sum % 10;
        carry = sum / 10;
        j++;
    }
    if(carry){
    c[50] = carry;
    e=51;
    }else{
    e=50;}
    for (int i = e-1; i>=0; i--) {
        printf("%d", c[i]);
    }

    return 0;
}
