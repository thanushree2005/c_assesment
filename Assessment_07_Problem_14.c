#include <stdio.h>
#include<math.h>
void disp_interchange_first_last_digit(int);


int main() {
    int n;
    scanf("%d",&n);
    disp_interchange_first_last_digit(n);
    return 0;
}


void disp_interchange_first_last_digit(int x){


    int s=0;
    int temp=x;
    while(x>0){
        s++;
        x=x/10;
    }
    int z=s;
    x=temp;
    int l=x%10;
    int doy=pow(10,(z-1));
    int f=(x/doy)%10;
    int w=x-l;
    int u=w-(f*doy);
    int p=(l*doy)+u+f;
    printf("%d",p);
}

