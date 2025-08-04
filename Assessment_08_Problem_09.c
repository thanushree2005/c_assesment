#include <stdio.h>
#include<math.h>
int check_last_digit_odd(int);
int s=0;

int main() {
    int y,n;
    scanf("%d",&n);
    y=check_last_digit_odd(n);
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

int check_last_digit_odd(int x){
    int z=x%10;
    if(z%2==0)
   { return x;}
    else
    {int w=count_total_digits(x);
    int doy=pow(10,(w-1));
    int u=x-doy;
    return u; }
}
