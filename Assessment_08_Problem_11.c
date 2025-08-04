#include <stdio.h>
int count_total_odd_digits(int);

int main() {
    int n;
    scanf("%d",&n);
    int s=count_total_odd_digits(n);
    printf("%d",s);
    return 0;
}
int count_total_odd_digits(int x){
    int s=0;
    int temp=x;
    while(x>0){
        int z=x%10;
        if(z%2!=0){
        s++;}
        x=x/10;
    } return s;

}
