#include <stdio.h>
#include <stdlib.h>
void disp_biggest_4digit_div7_9(void);
int main()
{
    disp_biggest_4digit_div7_9();
    return 0;
}
void disp_biggest_4digit_div7_9(){
int max=1000;
    for(int i=1000;i<10000;i++){
        if(i>max && i%7==0 && i%9==0){
            max=i;
        }
    }
    printf("%d",max);
}
