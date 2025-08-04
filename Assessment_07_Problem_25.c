#include <stdio.h>
void disp_single_digit_prime(int);

int main() {
    int n;
    scanf("%d",&n);
    disp_single_digit_prime(n);
    return 0;
}
void disp_single_digit_prime(int num){
        int s=0;
        while(num>0){
        int p=1;
        int z=num%10;
        for(int i=2;i<z;i++){
        if(z%i==0){
         p=0;}}
         if(z==1){
            p=0;
         }
         if(p==1){
            s++;
            //printf("%d\n",z);

    }
           num=num/10;

   }
   printf("%d",s);
}




