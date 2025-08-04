#include <stdio.h>
#include <stdlib.h>
int disp_sum(void);
int main()
{   int sum=disp_sum();
    printf("%d",sum);
    return 0;
}
int disp_sum(){int s=0;
    for(int i=1;i<7;i++){
        s+=i;
    }
    return s;

}
