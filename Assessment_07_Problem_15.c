#include <stdio.h>
#include<math.h>
void check_last_digit_odd(int);
int main() {
    int n;
    scanf("%d",&n);
    check_last_digit_odd(n);
    return 0;
}

void check_last_digit_odd(int x){
    int s=0;
    int z=x%10;
    if(z%2==0){
      printf("%d",x);
}
    else{
    int temp=x;
    while(x>0){
        s++;
        x=x/10;
    }
    x=temp;
    int w=s;
    int doy=pow(10,(w-1));
    int u=x-doy;
    printf("%d",u); }
}
