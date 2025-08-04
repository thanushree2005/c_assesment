#include <stdio.h>
void disp_sum_all_digits(int);

int main() {
    int n;
    scanf("%d",&n);
    disp_sum_all_digits(n);
    return 0;
}
void disp_sum_all_digits(int x){
    int s=0;
    int temp=x;
    while(x>0){
        int z=x%10;
        s+=z;
        x=x/10;
    }
    printf("%d",s);
}
