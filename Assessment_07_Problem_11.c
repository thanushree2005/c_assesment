#include <stdio.h>
void count_total_digits(int);
int s=0;
int main() {
    int y,n;
    scanf("%d",&n);
    count_total_digits(n);
    return 0;
}
void count_total_digits(int x){
    int temp=x;
    while(x>0){
        s++;
        x=x/10;
    }
    printf("%d",s);
}
