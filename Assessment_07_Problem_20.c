#include <stdio.h>
#include <stdlib.h>
void disp_1digit_prime_sum();
int main()
{  disp_1digit_prime_sum();
   return 0;
}
void disp_1digit_prime_sum(){
     int s=0;
    for(int i=2;i<9;i++){
    int num=i;
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


    }
           num=num/10;
   }
}
 printf("%d",s);}
