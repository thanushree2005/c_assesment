#include <stdio.h>
#include <stdlib.h>

int main()
{   int s=0;
    int a[5];
        for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
        s+=a[i];
        }
        printf("%d",s);

}
