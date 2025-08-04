#include <stdio.h>
#include<math.h>
int disp_interchange_first_last_digit(int);


int main() {
    int n;
    scanf("%d",&n);
    int p=disp_interchange_first_last_digit(n);
    printf("%d",p);
    return 0;
}
int count_total_digits(int x){
    int s=0;
    int temp=x;
    while(x>0){
        s++;
        x=x/10;
    }
    return s;
}

int disp_interchange_first_last_digit(int x){
    int temp=x;
    int z=count_total_digits(x);
    int l=x%10;
    int doy=pow(10,(z-1));
    int f=(x/doy)%10;
    int w=x-l;
    int u=w-(f*doy);
    int p=(l*doy)+u+f;
    return p;
}

