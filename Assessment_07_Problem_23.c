#include <stdio.h>
void disp_single_digit_square(int);

int main() {
    int n;
    scanf("%d",&n);
    disp_single_digit_square(n);
    return 0;
}
void disp_single_digit_square(int num){
    int s=0;
    while(num>0){
        int z=num%10;
        if(z==1||z==4||z==9){
         s++;}
        num=num/10;

   }
   printf("%d",s);


}



