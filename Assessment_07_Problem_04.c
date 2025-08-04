#include <stdio.h>
#include <stdlib.h>
void disp_rsum(void);
int main()
{   disp_rsum();
    return 0;
}
void disp_rsum(){int s=0;
    for(int i=6;i>0;i--){
        s+=i;
    }
    printf("%d",s);
}
