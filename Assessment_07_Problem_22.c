#include <stdio.h>
void disp_total_odd_2digits(int);

int main() {
    int n;
    scanf("%d",&n);
    disp_total_odd_2digits(n);
    return 0;
}
void disp_total_odd_2digits(int n){
    int s=0;
    int temp=n;
    while(temp>0){
        int z=temp%100;

        if(z%2==1 && ((z/10)%10)!=0){
        //printf("%d\n",z);
         s++;}
         temp=temp/10;
    }
     printf("%d",s);
}
