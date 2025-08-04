#include <stdio.h>
#include<math.h>
void check_prime_and_sum14(int);


int main() {
    int y,n;
    scanf("%d",&n);
    check_prime_and_sum14(n);
    return 0;
}

void check_prime_and_sum14(int n){
    int s=0;
    int temp=n;
    while(n>0){
        int u=n%10;
        s+=u;
        n=n/10;
    }
    n=temp;
    int x=n;
     int p=1;
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0){
            p=0;
        }
    }
    if(s==14){
        if(p)
       printf("prime &sum of digits is 14");
        else
        printf("not prime but sum of digits is 14");

    }
    else{
         if(p)
        printf("prime &sum of digits is not 14");
        else
        printf("not prime & sum of digits is not 14");}
        }
