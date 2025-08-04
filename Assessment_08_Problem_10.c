#include <stdio.h>
#include <stdlib.h>
int disp_1digit_prime_sum();
int main()
{  int s=disp_1digit_prime_sum();
   printf("%d",s);
   return 0;
}
int disp_1digit_prime_sum(){
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
} return s;
 }
