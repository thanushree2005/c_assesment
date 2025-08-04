#include <stdio.h>
#include <stdlib.h>
void disp_sum(void);
int main()
{   disp_sum();
    return 0;
}
void disp_sum(){int s=0;
    for(int i=1;i<6;i++){
        s+=i;
    }
    printf("%d",s);
}
