#include <stdio.h>
#include<math.h>
void check_prime(int);


int main() {
    int y,n;
    scanf("%d",&n);
    check_prime(n);
    return 0;
}
void check_prime(int x){
    int p=1;
    if(x==1) p=0;
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0){
            p=0;
        }

    }
    if(p)
    printf("prime");
    else
    printf("not prime");

}
