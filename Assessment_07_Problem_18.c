#include <stdio.h>
#include<math.h>
void check_first_2digits_prime(int);
int s=0;

int main() {
    int y,n;
    scanf("%d",&n);
    check_first_2digits_prime(n);
    return 0;
}
void check_first_2digits_prime(int num){
    int temp=num;
    int i=0;
    while(temp>0){
       i++;
       temp=temp/10;
    }
    int x=100;
    int prime=1;
    int z=num-(x*(num/x));
    for(int i=2;i<z;i++){
        if(z%i==0){
            prime=0;
        }
    }

   if(prime){
        printf("prime");
    }else{
         printf("not prime");
    }

}

