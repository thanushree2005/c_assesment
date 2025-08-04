#include <stdio.h>
#include <stdlib.h>
void disp_count_hcf(int,int);
int main()
{   int n1, n2;
    printf("enter 2 numbers");
    scanf("%d %d", &n1, &n2);
    disp_count_hcf(n1,n2);
    return 0;
}
void disp_count_hcf(int n1,int n2){

    int i, hcf;
    for (i = 1; i <= n1 && i <= n2; ++i) {
        if (n1 % i == 0 && n2 % i == 0)
            hcf = i;
    }
    printf("%d",hcf);
}

