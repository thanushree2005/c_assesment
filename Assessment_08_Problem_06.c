#include <stdio.h>
int disp_sum_all_digits(int);

int main() {
    int n;
    scanf("%d",&n);
    int s=disp_sum_all_digits(n);
    printf("%d",s);
    return 0;
}
int disp_sum_all_digits(int x){
    int s=0;
    int temp=x;
    while(x>0){
        int z=x%10;
        s+=z;
        x=x/10;
    }
    return s;
}
