#include <stdio.h>
void disp_two_digit_square(int);

int main() {
    int n;
    scanf("%d",&n);
    disp_two_digit_square(n);
    return 0;
}
void disp_two_digit_square(int n){
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
    //printf("%d\n",x);
    if(x==16||x==25||x==36||x==49||x==64||x==81){
         f++;

    }
}
printf("\n%d",f);


}



