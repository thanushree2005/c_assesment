#include <stdio.h>
void disp_total_odd_2digits(int);

int main() {
    int n;
    scanf("%d",&n);
    disp_total_odd_2digits(n);
    return 0;
}
void disp_total_odd_2digits(int n){
    int k=0,j,f=0;
    int t=n;
    int a[100];
    while(t>0){
    a[k]=t%10;
    k++;
    t=t/10;
}

for(int i=k-1;i>0;i--){
    int x=(a[i]*10)+a[i-1];
    printf("%d\n",x);
    if(x%2!=0){
         f++;

    }
}
printf("\n%d",f);


}
