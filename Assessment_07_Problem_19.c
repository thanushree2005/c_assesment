#include <stdio.h>
#include<math.h>
void middle_2digits_prime(int);
int s=0;

int main() {
    int n;
    printf("enter a 4 digit no:");
    scanf("%d",&n);
    middle_2digits_prime(n);
    return 0;
}


void middle_2digits_prime(int n){
    int l=n%10;
    int m=n-l;
    int temp=n;
    while(n>0){
        s++;
        n=n/10;
    }
    n=temp;
    int z=s;
    int doy=pow(10,(z-1));
    int f=(n/doy)%10;
    int w=m-(f*doy);
    int u=w/10;
    //printf("%d",u);

    int p=1;
    for(int i=2;i<=sqrt(u);i++){
        if(u%i==0){
            p=0;
        }
    }
    if(p){

            printf("prime");
    }else{
         printf("not prime");
    }


}
