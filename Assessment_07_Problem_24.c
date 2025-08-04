#include <stdio.h>
void disp_two_digit_square(int);

int main() {
    int n;
    scanf("%d",&n);
    disp_two_digit_square(n);
    return 0;
}
void disp_two_digit_square(int n){
    int s=0;
    int temp=n;
    while(temp>0){
        int z=temp%100;

        if(((z/10)%10)!=0){
        if(z==16||z==25||z==36||z==49||z==64||z==81){
        s++;

    }

         }
         temp=temp/10;
    }
     printf("%d",s);
    }



