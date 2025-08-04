#include <stdio.h>
int count_total_digits(int);
int s=0;
int main() {
    int y,n;
    scanf("%d",&n);
    y=count_total_digits(n);
    printf("%d",y);
    return 0;
}
int count_total_digits(int x){
    int temp=x;
    while(x>0){
        s++;
        x=x/10;
    }
    return s;
}
