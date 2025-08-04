#include <stdio.h>
void count_total_odd_digits(int);

int main() {
    int n;
    scanf("%d",&n);
    count_total_odd_digits(n);

    return 0;
}
void count_total_odd_digits(int x){
    int s=0;
    int temp=x;
    while(x>0){
        int z=x%10;
        if(z%2!=0){
        s++;}
        x=x/10;
    }
    printf("%d",s);
}
